using namespace std;
#include <iostream>
#include <string>
#define task 2

string newfrasetask1(string frase) {
	for (int i = 0; frase[i] != '\0'; i++) {
		if ((frase[i] == '.' || frase[i] =='!'|| frase[i]=='?') && ((int)frase[i + 1] >96 && (int)frase[i+1]<123)) {
			frase[i + 1] = (int)frase[i + 1] - 32;
		}
	}
	return frase;
}
void longstring(string frase) {
	
	string max2;
	for (int i = 0; frase[i] != '\0'; i++) {
		if (((int)frase[i] > 64 && (int)frase[i] < 91) || ((int)frase[i] > 96 && (int)frase[i] < 123)) {
			char* max = new char[100];
			int k = 0;
			for (int j = i; ((int)frase[j] > 64 && (int)frase[j] < 91) || ((int)frase[j] > 96 && (int)frase[j] < 123); j++) {
				max[k] = frase[j];
				i = j;
				k++;

			}
			max[k] = '\0';

			if (max2.length() < strlen(max)) {
				max2 = max;
			}
		}
	}
	cout << "\nThe longest word is \"" << max2 << "\" and has " << max2.length() << " symbols\n";
	
}
int main()
{
#if task == 1

	string frase;
	cout << "Input your string\n";
	getline(cin, frase);			//converting lowercase letter to uppercase letter after ".", "!", "?"
	frase = newfrasetask1(frase);
	cout << frase;

#elif task == 2
	string frase;
	cout << "Input your string\n";
	getline(cin, frase);
	longstring(frase);
#endif
}

