#ifndef WINDOW_SYSTEM_FACTORY_H
#define WINDOW_SYSTEM_FACTORY_H

class WindowImp;

class WindowSystemFactory {
public:
    static WindowSystemFactory* Instance();
    WindowImp* MakeWindowImp();
protected:
    WindowSystemFactory();
private:
    static WindowSystemFactory* _instance;
};

#endif /* WINDOW_SYSTEM_FACTORY_H */
