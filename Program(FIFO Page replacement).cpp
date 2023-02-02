#include<iostream>
using namespace std;
int main()
{
    int referenceString[20],pageFaults=0,m,n,s,pages,frames;
    cout<<"Enter the number of pages";
    cin>>pages;
    cout<<"\n Enter reference string values:\n";

    for(m=0;m<pages;m++)
    {
        cout<<"Value No."<<m+1<<"\t";
        cin>>referenceString[m];
    }
    cout<<"\n What are the total numbers of frames;\t";
    {
        cin>>frames;
    }
    int temp[frames];

    for(m=0;m<frames;m++)    

    {
        temp[m]=-1;
    }
    for(m=0;m<pages;m++)
    {
        s=0;
        for(n=0;n<frames;n++)
        {
            if(referenceString[m]==temp[n])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        
        if((pageFaults<=frames)&&(s==0))
        {
            temp[m]=referenceString[m];
        }
        else if (s==0)
        {
            temp[(pageFaults-1)%frames]=referenceString[m];
        }
    }
    cout<<"\n Total Pag Faults :\t"<<pageFaults;
    cout<<"\n Total page hit: \n"<<pages-pageFaults;
    return 0;
}

