#include<iostream>

using namespace std;

template <typename T>
class Media{
    private:
        bool status, audio, video;
        int id;
        T currentPlaying;
    
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
        virtual void changeStatus() = 0; //changes the media?
        virtual void changeChanel() = 0;
        virtual T currentlyPlaying() = 0;
};

int main(){
    return 0;
}