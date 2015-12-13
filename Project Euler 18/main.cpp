#include <iostream>

using namespace std;
// Creating a tree to store the data
struct Leaf
{
    int data;
    Leaf* left;
    Leaf* right;
};

Leaf* insert(Leaf* root,int data)
{
    Leaf* temp=new Leaf();
 if(root==NULL)
 {
     temp->data=data;
     temp->left=NULL;
     temp->right=NULL;
     return temp;
 }
 else
 {
     // We need to traverse till the last node inserted and then we have to append our new leaf into the left/right of that.
     while(root->left!=NULL || root->right!=NULL)
     {

     }
 }
}
int main()
{
    cout <<"Okay! Let's find out the maximum sum"<< endl;
    int array[]={75
,95,64
,17,47,82
,18,35,87,10
,20,4,82,47,65
,19,1,23,75,3,34
,88,2,77,73,7,63,67
,99,65,4,28,6,16,70,92
,41,41,26,56,83,40,80,70,33
,41,48,72,33,47,32,37,16,94,29
,53,71,44,65,25,43,91,52,97,51,14
,70,11,33,28,77,73,17,78,39,68,17,57
,91,71,52,38,17,14,91,43,58,50,27,29,48
,63,66,4,68,89,53,67,30,73,16,69,87,40,31
,4,62,98,27,23,9,70,98,73,93,38,53,60,4,23};

for(int i=0; i<array.size()-15;i++)
{
    Leaf* Curr=new Leaf();
    Leaf* R=new Leaf();
    Leaf* L=new Leaf();
    Curr->data=array[i];
    L->data=array[i+1];
    R->data=array[i+2];
}
    return 0;
}
