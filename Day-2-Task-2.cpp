#include <iostream>
using namespace std;
class Robot
{
    private:
          int speed;
          int Battery;
    public: 
        void setSpeed(int s)
        {
            if (s>=0 && s<=100)
            {
                speed=s;
            }
            else
            {
                cout<<"Invalid Speed"<<endl;
            }
        }
        void setBattery(int b)
        {
            if (b>=0 && b<=100)
            {
                Battery=b;
            }
            else
            {
                cout<<"Invalid Battery Level"<<endl;
            }
        }
        void moveForward()
        {
            if (Battery>=5)
            {
                cout<<"Moving forward"<<endl;
                Battery=Battery-5;
            }
            else
            {
                cout<<"Battery not enough, Robot cannot move"<<endl;
            }
        }
        void turnLeft()
        {
            if (Battery>=5)
            {
                cout<<"Turning left"<<endl;
                Battery=Battery-5;
            }
            else
            {
                cout<<"Battery not enough, Robot cannot turn"<<endl;
            }
        }
        void moveBackward()
        {
            if(Battery>=5)
            {
                cout<<"Moving backward"<<endl;
                Battery=Battery-5;
            }
            else
            {
                cout<<"Battery not enough, Robot cannot move"<<endl;
            }
        }
        void turnRight()
        {
            if(Battery>=5)
            {
                cout<<"Turning right"<<endl;
                Battery=Battery-5;
            }
            else
            {
                cout<<"Battery not enough, Robot cannot turn"<<endl;
            }
        }
        void displayStatus()
        {
            cout<<"Speed: "<<speed<<endl;
            cout<<"Battery Level: "<<Battery<< "%"<<endl;
        }
};

int main()
{
    Robot myRobot;
    int speed, battery; 
    cout<<"Enter speed (0-100): ";
    cin>>speed;
    cout<<"Enter battery level (0-100): ";
    cin>>battery;
    myRobot.setSpeed(speed);
    myRobot.setBattery(battery);
    myRobot.moveForward();
    myRobot.turnLeft();
    myRobot.moveForward();
    myRobot.turnRight();
    myRobot.displayStatus();
    return 0;
}