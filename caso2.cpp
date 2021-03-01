#include<iostream>

using namespace std;

template <typename T>
class Media{
    
    public:
        bool status, audio, video;
        int id;
        T currentPlaying;

        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
        virtual void changeChanel() = 0;

        void changeStatus(){
            status = !status;
        }

        T currentlyPlaying(){
            return currentPlaying;
        }

        int getID(){
            return id;
        }
};

/* Example
class TV: public Media<int>{
    public:
        TV(){
            status = audio = video = true;
            id = 0;
            currentPlaying = 2;
        }


};
*/

int main(){
    return 0;
}