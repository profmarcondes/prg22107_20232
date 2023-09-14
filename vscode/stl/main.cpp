#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	int qnt, input;

	vector<int> numbers;
	vector<int>::iterator vi;

	cout << "Quantos números deseja informar ? ";
	cin >> qnt;
	for(int i=1; i <= qnt; i++){
		cout << "Informe o número " << i << ": ";
		cin >> input;
		numbers.push_back(input);
	}

    /*
    vector<int> hugo;
    cout << "Entre com os valores do vetor HUGO:";
    do {
        cin >> input;
        if(!cin.fail()){
            hugo.push_back(input);
            cout << "Added " << input << "/" << cin.tellg() << endl;
        }
    } while(!cin.eof());
    */

	cout << "Os números informados foram: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
	   cout << *vi << " ";
	}
	cout << endl;

	cout << "O menor número informado é: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "O maior número informado é: " << *max_element(numbers.begin(), numbers.end()) << endl;

	sort(numbers.begin(), numbers.end());
	cout << "Ordem crescente dos números: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
		cout << *vi << " ";
	}
	cout << endl;

	cout << "Ordem decrescente dos números (Usando reverse interator): ";
	std::vector<int>::reverse_iterator rit;
	for (rit = numbers.rbegin(); rit!= numbers.rend(); rit++)
		cout << *rit << " ";
	
    cout << endl;

	return 0;
}