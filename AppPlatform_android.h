#pragma once

#include "AppPlatform.h"

class ANativeActivity;

class AppPlatform_android : public AppPlatform
{
public:
	virtual void getDataUrl() const;
	virtual void getImagePath(const std::string &, bool);
	virtual void loadPNG(ImageData &, const std::string &, bool);
	virtual void loadTGA(ImageData &, const std::string &, bool);
	virtual void getKeyFromKeyCode(int, int, int);
	virtual void showKeyboard(const std::string &, int, bool, bool, const Vec2 &);
	virtual void hideKeyboard();
	virtual void getKeyboardHeight() const;
	virtual void swapBuffers();
	virtual void discardBackbuffer();
	virtual void getSystemRegion() const;
	virtual void getGraphicsVendor();
	virtual void getGraphicsRenderer();
	virtual void getGraphicsVersion();
	virtual void getGraphicsExtensions();
	virtual void pickImage(ImagePickingCallback &);
	virtual void getExternalStoragePath();
	virtual void getInternalStoragePath();
	virtual const std::string &getUserdataPath();
	virtual void showDialog(int);
	virtual void createUserInput();
	virtual void getUserInputStatus();
	virtual void getUserInput();
	virtual void getScreenWidth();
	virtual void getScreenHeight();
	virtual void getPixelsPerMillimeter();
	virtual void updateTextBoxText(const std::string &);
	virtual bool supportsVibration();
	virtual void vibrate(int);
	virtual void readAssetFile(const std::string &);
	virtual void getDateString(int);
	virtual void checkLicense();
	virtual bool hasBuyButtonWhenInvalidLicense();
	virtual void uploadPlatformDependentData(int, void *);
	virtual void isNetworkEnabled(bool);
	virtual void isPowerVR();
	virtual void buyGame();
	virtual void finish();
	virtual void launchUri(const std::string &);
	virtual UIScreenType getScreenType() const;
	virtual void getPlatformStringVar(int);
	virtual void getApplicationId();
	virtual void getAvailableMemory();
	virtual void getBroadcastAddresses();
	virtual void getModelName();
	virtual void getDeviceId();
	virtual void createUUID();
	virtual bool isFirstSnoopLaunch();
	virtual void hasHardwareInformationChanged();
	virtual bool isTablet();
	virtual void initWithActivity(ANativeActivity *);
};