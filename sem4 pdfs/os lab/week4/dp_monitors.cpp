#include <bits/stdc++.h>

PhilosopherMonitor::PhilosopherMonitor(char* Name)
                    : Monitor(Name, HOARE) 
{
     for (int i = 0; i < PHILOSOPHERNUM; i++) {
          strstream *ConditionName;
          ConditionName = new strstream;
          ConditionName->seekp(0, ios::beg);
          (*ConditionName) << "WaitChopStick" << i << '\0';
          WaitChopStick[i] = new Condition(ConditionName->str());
          ChopStick[i] = AVAILABLE;
     }
}

int PhilosopherMonitor::CanEat(int Number)
{
     if ((ChopStick[Number] == AVAILABLE) && 
         (ChopStick[(Number+1)%PHILOSOPHERNUM] == AVAILABLE))
          return 1;      // if both chopsticks are available, return 1
     else
          return 0;      // otherwise, return 0
}

void PhilosopherMonitor::GetChopsticks(int Number)
{
     MonitorBegin();
     while (!CanEat(Number))                 // wait if both chops 
          WaitChopStick[Number]->Wait();     // are not available
     ChopStick[Number] = NOT_AVAILABLE;      // got them, set to unavailable
     ChopStick[(Number+1)%PHILOSOPHERNUM] = NOT_AVAILABLE;
     MonitorEnd();
}

void  PhilosopherMonitor::PutChopsticks(int Number)
{
     MonitorBegin();
     ChopStick[Number]=AVAILABLE;       // put back two chopsticks
     ChopStick[(Number+1)%PHILOSOPHERNUM]=AVAILABLE;
     WaitChopStick[(Number+1)%PHILOSOPHERNUM]->Signal();  // right neighbor
     WaitChopStick[(Number+PHILOSOPHERNUM-1)%PHILOSOPHERNUM]->Signal(); // left
     MonitorEnd();
}