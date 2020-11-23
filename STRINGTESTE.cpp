#include <bits/stdc++.h>


using namespace std;




int max_sum(vector<int> s){
	
	int resp=2, maior=0;
	
	for(int i=0;i<s.size();i++){
		
		maior=max(0,maior+s[i]);
		
		resp=max(resp,maior);
	}
	
	return resp;
}

int oi(vector<int> v)
{
	int sum = 0, maximo = 0;
        for(int i = 0; i < v.size(); i++)
        {
        	sum=max(0,sum+v[i]);
            if(sum > maximo)
                maximo = sum;
        }
        
        cout << maximo;
}

int main()
{

	string a = "ab", b = "bb";
	if(a < b)
		cout << "ok\n";	

	Node * x = NULL;
	Node **y = &x;

	(*y) = new Node(1);

	while(x != NULL)
	{
		cout << x->val << endl;
		x = x->next;	
	}

	int vetor[] = {1, 2, 3, 4};


	cout << endl;
	int soma = 0;
	do
	{	
		cout << vetor[0] << vetor[1] << vetor[2] << vetor[3] << endl;
		soma++;
	}while(next_permutation(vetor, vetor + 4));

	cout << soma << endl;


	vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(2);
	v.push_back(1);

	sort(v.begin(), v.end(), greater<int>());

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	priority_queue<int, vector<int>, greater<int>> q;

	return 0;
}



