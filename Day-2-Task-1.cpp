#include <iostream>
using namespace std;
void readSensors(int sensors[])
{
    for(int i = 0; i < 8; i++)
    {
        cin >> sensors[i];
    }
}
int detectLine(int sensors[])
{
  int left=0;
  int right=0;
  int center=0;
  for(int i=0;i<8;i++)
  {
    if (i<3)
    {
      left=left+sensors[i];
    }
    else if(i<5)
    {
      center=center+sensors[i];
    }
    else
    {
      right=right+sensors[i];
    }
  }
  if (center<left && left>right)
  {
    return 1;
  }
  else if (center>left && center>right)
  {
    return 2;
  }
  else if (center<right && right>left)
  {
    return 3;
  }
  else
  {
    return 0;
  }
}
void moveRobot(int position)
{
    if(position == 1)
        cout << "Action: turn left";

    else if(position == 2)
        cout << "Action: move forward";

    else if(position == 3)
        cout << "Action: turn right";

    else
        cout << "Action: line lost";
}
int main()
{
  int sensors[8];
  readSensors(sensors);
  int position = detectLine(sensors);

  if(position == 1)
    cout << "Line position: left" << endl;

  else if(position == 2)
    cout << "Line position: center" << endl;

  else if(position == 3)
    cout << "Line position: right" << endl;

  else
    cout << "Line position: lost" << endl;

moveRobot(position);
}