#ifndef Nefry_h
#define Nefry_h





class Nefry_lib
{
public:

	bool
		setModuleID(String id),
		setModulePass(String pass),
		setModuleClass(String className),
		setUser(String user),
		setUserPass(String pass),
		setStorageValue(long value, int pointer),
		setStorageStr(String str, int pointer);

	String
		getModuleID(),
		getModuleClass(),
		getUser(),
		getStorageStr(int pointer);

	long
		getStorageValue(int pointer);


	void
		reset(),
		sleep(const int sec),
		setProgramName(const char * pn),
		beginLed(const int num, const int pin, uint8_t t),
		setLed(const int r, const int g, const int b, const char w = 122, const int pin = 16, const int num = 0),
		setLed(String _colorStr, const char w = 122, const int pin = 16, const int num = 0),
		addWiFi(String ssid, String pass),
		deleteWiFi(int id),
		saveWiFi(),
		/*
		println(float text),
		println(double text),
		println(char text),
		println(int text),
		println(long text),
		println(unsigned char text),
		println(unsigned int text),
		println(unsigned long text),
		print(float text),
		print(double text),
		print(char text),
		print(int text),
		print(long text),
		print(unsigned char text),
		print(unsigned int text),
		print(unsigned long text),
		print(String text, int ln = 0),
		println(String text),
		*/
		nefry_init(),
		nefry_loop(),
		ndelay(unsigned long ms);

	void enableSW();

	void disableSW();

	bool
		readSW();

	void pollingSW();
	bool getBootFlg();


	String
		getVersion(),
		getProgramName(),
		getAddressStr(IPAddress ip);


private:
	bool _swEnableFlg;
	bool _bootMode = true, _swflg = false;
	int hextonum(char c);

};
extern Nefry_lib Nefry;
#endif

void _swcallback_function();