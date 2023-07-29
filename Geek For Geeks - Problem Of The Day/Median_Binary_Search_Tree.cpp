/{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};



float findMedian(struct Node* node);

// Function to Build Tree
Node* buildTree(string str)
{
   // Corner Case
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

   // Creating vector of strings from input
   // string after spliting by space
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   // Create the root of the tree
   Node* root = new Node(stoi(ip[0]));
 
   // Push the root to the queue
   queue<Node*> queue;
   queue.push(root);

   // Starting from the second element
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

int main() {
  
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   //cout << t << endl;
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root = buildTree(s);

      // getline(cin, s);
       
        cout << findMedian(root) << endl;

      // cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends


/*
Structure of the binary Search Tree is as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
// your task is to complete the Function
// Function should return median of the BST

void inorderTraversal(Node *root, std::vector<int> &result) {
    if (root == NULL) {
        return;
    }

    inorderTraversal(root->left, result);
    result.push_back(root->data);
    inorderTraversal(root->right, result);
}

float findMedian(struct Node *root) {
    if (root == NULL) {
        return 0.0;
    }

    std::vector<int> result;
    inorderTraversal(root, result);

    int n = result.size();
    float ans;

    if (n % 2 == 0) {
        ans = (result[n / 2 - 1] + result[n / 2]) / 2.0;
    } else {
        ans = result[n / 2];
    }

    return ans;
}
/*
float findMedian(struct Node *root)
{
      float ans;
      vector<int> result;
      if(root==NULL) {
          return 0.0;
      }
      vector<int> left = findMedian(root -> left);
      result.insert(result.end(),left.begin(),right.end());
      vector<int> right = findMedian(root -> right);
      result.insert(result.end(),right.begin(),right.end());
      result.push_back(root->val);
      sort(result.begin(), result.end());
   
      int n=nums.size()/2;
      ans = result[n];
      return ans;
      
}
*/

/*
float findMedian(struct Node *root) {
    float ans;
    std::vector<int> result;

    if (root == NULL) {
        return 0.0;
    }

    std::function<void(Node*)> inorder = [&](Node* node) {
        if (node == NULL) {
            return;
        }
        inorder(node->left);
        result.push_back(node->data);
        inorder(node->right);
    };

    inorder(root);

    int n = result.size();
    int mid = n / 2;

    if (n % 2 == 0) {
        ans = (result[mid - 1] + result[mid]) / 2.0;
    } else {
        ans = result[mid];
    }

    return ans;
}
*/
