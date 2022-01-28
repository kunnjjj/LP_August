#include<iostream>
#include<vector>

using namespace std;
void print_vector(vector<int> A)
{
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{

    vector<int> A;

    A.push_back(3);

    A.push_back(2);
    A.push_back(4);

    print_vector(A);

    A.push_back(10);

    print_vector(A);


    vector<int> B(5, -1 );

    print_vector(B);

    B.push_back(3);

    print_vector(B);

    vector<vector<int>> daksh(3,vector<int> (2,45)); //3 rows and 2 col
    cout<<"printing 2d vector daksh"<<endl;
    for(int i=0;i<daksh.size();i++)
    {
        for(int j=0;j<daksh[i].size();j++)
        {
            cout<<daksh[i][j]<<" ";
        }
        cout<<endl;
    }

    vector<vector<vector<int>>> dev(3,vector<vector<int>> (2,vector<int> (4)));

    
    return 0;
}