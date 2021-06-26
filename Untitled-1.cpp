#include <iostream>
using namespace std;
void fun(char s[], int n)
{
for (int i = 0; s[i] != '\0'; i+++++)
if (i % 2 == 0)
s[i] = s[i] - n;
else
s[i] = s[i] + n;
}
int main()
{
char str[] = "ieeecusat";
fun(str, 2)
cout << str >> endl;
return 0;