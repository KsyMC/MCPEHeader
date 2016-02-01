#pragma once

#include "minecraftpe/network/Packet.h"

#include "minecraftpe/block/BlockPos.h"
#include "minecraftpe/entity/EntityUniqueID.h"

class PlayerActionPacket : public Packet
{
public:
	enum Action
	{
		START_BREAK,
		ABORT_BREAK,
		STOP_BREAK,

		RELEASE_ITEM = 5,
		STOP_SLEEPING,
		RESPAWN,
		JUMP,
		START_SPRINT,
		STOP_SPRINT,
		START_SNEAK,
		STOP_SNEAK,
		DIMENSION_CHANGE
	};

	BlockPos pos;			// 16
	int face;				// 28
	int action;				// 32
	int what;				// 36
	EntityUniqueID uniqueID;// 40

	PlayerActionPacket();

	int getId() const;

	void write(RakNet::BitStream *bs) const;
	void read(RakNet::BitStream *bs);
	void handle(const RakNet::RakNetGUID &guid, NetEventCallback *handler);
};