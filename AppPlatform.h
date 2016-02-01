#pragma once

#include <string>

#include "../ValidCharacterFlag.h"
#include "gui/UIScreenType.h"

class ImageData;
class ImagePickingCallback;
class UriListener;
class FullscreenMode;
class Vec2;
class FilePickerSettings;

class AppPlatform
{
public:
	static AppPlatform *mSingleton;

	AppPlatform();
	virtual ~AppPlatform();
	virtual void getDataUrl() const = 0;
	virtual void getImagePath(const std::string &, bool) = 0;
	virtual void loadPNG(ImageData &, const std::string &, bool);
	virtual void loadTGA(ImageData &, const std::string &, bool);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void showKeyboard(const std::string &, int, bool, bool, const Vec2 &);
	virtual void hideKeyboard();
	virtual void getKeyboardHeight() const;
	virtual void hideMousePointer();
	virtual void showMousePointer();
	virtual void getPointerFocus();
	virtual void setPointerFocus(bool);
	virtual void toggleSimulateTouchWithMouse();
	virtual void swapBuffers() = 0;
	virtual void discardBackbuffer();
	virtual void getSystemRegion() const = 0;
	virtual void getGraphicsVendor() = 0;
	virtual void getGraphicsRenderer() = 0;
	virtual void getGraphicsVersion() = 0;
	virtual void getGraphicsExtensions() = 0;
	virtual void pickImage(ImagePickingCallback &) = 0;
	virtual void pickFile(FilePickerSettings &);
	virtual void supportsFilePicking() const;
	virtual void setSleepEnabled(bool);
	virtual void getExternalStoragePath() = 0;
	virtual void getInternalStoragePath() = 0;
	virtual const std::string &getUserdataPath() = 0;
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void _tick();
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void setScreenSize(int, int);
	virtual void getPixelsPerMillimeter();
	virtual void updateTextBoxText(const std::string &);
	virtual bool isKeyboardVisible();
	virtual bool supportsVibration();
	virtual void vibrate(int);
	virtual void getAssetFileFullPath(const std::string &);
	virtual void readAssetFile(const std::string &);
	virtual void listAssetFilesIn(const std::string &, const std::string &) const;
	virtual void getDateString(int);
	virtual void checkLicense();
	virtual bool hasBuyButtonWhenInvalidLicense();
	virtual void uploadPlatformDependentData(int, void *);
	virtual void isNetworkEnabled(bool);
	virtual void isPowerVR();
	virtual void buyGame();
	virtual void finish();
	virtual void launchUri(std::string const &);
	virtual bool useMetadataDrivenScreens() const;
	virtual bool useXboxControlHelpers() const;
	virtual bool useCenteredGUI() const;
	virtual UIScreenType getScreenType() const = 0;
	virtual bool hasIDEProfiler();
	virtual void getPlatformStringVar(int);
	virtual void getApplicationId() = 0;
	virtual void getAvailableMemory();
	virtual void getTotalMemory();
	virtual void getBroadcastAddresses();
	virtual void getModelName();
	virtual void getDeviceId() = 0;
	virtual void createUUID() = 0;
	virtual bool isFirstSnoopLaunch() = 0;
	virtual void hasHardwareInformationChanged() = 0;
	virtual bool isTablet() = 0;
	virtual void registerUriListener(UriListener &);
	virtual void unregisterUriListener(UriListener &);
	virtual void setFullscreenMode(FullscreenMode);
	virtual bool isNetworkThrottled() const;
	virtual void collectGraphicsHardwareDetails();
	virtual std::string getEdition() const;
};
