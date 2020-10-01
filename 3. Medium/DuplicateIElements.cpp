#include <iostream>

using namespace std;

int main()
{
    int lastDuplicate = 0;
    int n,A[20];

    cout<< "Enter the value of n:\n"<<endl;
    cin>>n;

    cout<< "Enter the Array elements:\n"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

/**********************************************************************************************************************/
// FINDING THE DUPLICATE ELEMENTS IN A SORTED ARRARY:

    /*
        for(int i=0; i<n-1 ; i++)
        {
            if(A[i] == A[i+1] && A[i] != lastDuplicate )
            {
                cout<<endl<<"The duplicate element is : "<<A[i]<<endl;
                lastDuplicate = A[i];
            }
        }
    */

/**********************************************************************************************************************/
// DUPLICATE ELEMENT IN A SORTED ARRAY USING (HASHING)

    int low=A[0];
    int high = A[n-1];
    int H[high];

    for(int i=0; i<=high; i++)
    {
        H[i]=0;
    }

    for(int i=0; i<n ; i++)
    {
        H[A[i]]++;
    }

    for(int i=0; i<= high; i++)
    {
        if ( H[i] > 1)
            cout<<i<< " Has appeared : " << H[i] << " times"<<endl;
    }

/*******************************************************************************************************************/
// COUNTING THE NUMBER OF TIMES THE DUPLICATE APPEARS

    /*
        for(int i=0;i<n-1;i++)
        {
            if (A[i] == A[i+1])
            {
                int j = i+1;
                while(A[j]==A[i])
                    j++;

                cout<< A[i] << " is Appearing " << j-1 << " times"<<endl;
                i = j-1;
            }
        }

    */

/*******************************************************************************************************************/
// FINDING DUPLICATE ELEMENTS IN THE AN UNSORTED ARRAY

    /*
         for(int i=0;i<n-1;i++)
         {
             int count = 1;
             if(A[i] != -1)
             {

             for(int j=i+1;j<n;j++)
             {
                 if(A[i] == A[j])
                 {
                     count++;
                     A[j]=-1;
                 }
             }
             cout<<A[i]<< " is present :" <<count<< " times"<<endl;
             }
         }

    */

    return 0;
}