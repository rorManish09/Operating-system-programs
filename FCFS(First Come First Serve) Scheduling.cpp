#include<iostream>
using namespace std;
int main()
{
    int n,burstTime[20],waitingTime[20],turnaroundTime[20],average_waitingTime=0,avg_turnaroundTime,i,j;
    cout<<"Enter total number of Processes";
    cin>>n;
    cout<<"\n Enter process Burst Time \n";

    for(i=0;i<n;i++)
    {
        cout<<"Process:"<<i+1;
        cin>>burstTime[i];
    }
    waitingTime[0]=0;
    
    for(i=1;i<n;i++)
    {
        waitingTime[i]=0;

        for(j=0;j<1;j++)
        {
            waitingTime[i]+=burstTime[j];
        }
    }
    cout<<"\n Process\t Burst_Time \t Waiting_time  \t Turnaround_time";
    for(i=0;i<n;i++)
    {
        turnaroundTime[i]=burstTime[i]+waitingTime[i];
        average_waitingTime+=waitingTime[i];
        avg_turnaroundTime+=turnaroundTime[i];
        cout<<"\n P[<<"<<i+1<<"]"<<"\t\t"<<burstTime[i]<<"\t\t"<<waitingTime[i]<<"\t\t"<<turnaroundTime[i];
    }

    average_waitingTime=average_waitingTime/i;
    avg_turnaroundTime=avg_turnaroundTime/i;
    cout<<"\n Average Waiting Time :"<<average_waitingTime;
    cout<<"\n Average Turnaround Time:"<<avg_turnaroundTime;
    return 0;
}