#pragma once

#include "NetEventCallback.h"

class PacketSender;
class MinecraftClient;

// Size : 20
class ClientNetworkHandler : public NetEventCallback
{
public:
	PacketSender  *sender;		// 4
	MinecraftClient  *client;	// 8
	Level  *level;				// 12

public:
	virtual ~ClientNetworkHandler();
	virtual void onDisconnect(RakNet::RakNetGUID const &, std::string const &);
	virtual void allowIncomingPacketId(RakNet::RakNetGUID const &, int);
	virtual void handle(RakNet::RakNetGUID const &, PlayStatusPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TextPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TakeItemEntityPacket *);
	virtual void handle(RakNet::RakNetGUID const &, SetPlayerGameTypePacket *);
	virtual void handle(RakNet::RakNetGUID const &, LevelEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, EntityEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UseItemPacket *);
	virtual void handle(RakNet::RakNetGUID const &, CraftingDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, UpdateAttributesPacket *);
	virtual void handle(RakNet::RakNetGUID const &, TelemetryEventPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ClientboundMapItemDataPacket *);
	virtual void handle(RakNet::RakNetGUID const &, ChunkRadiusUpdatedPacket *);
	virtual void handle(RakNet::RakNetGUID const &, RespawnPacket *);
};
