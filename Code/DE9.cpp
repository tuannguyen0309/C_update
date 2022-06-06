#include <bits/stdc++.h>
using namespace std;
#define DELIM "."

bool valid_part(char *s)
{
    int n = strlen(s);
    if (n > 3)
        return false;
    for (int i = 0; i < n; i++)
        if ((s[i] >= '0' && s[i] <= '9') == false)
            return false;
    string str(s);
    if (str.find('0') == 0 && n > 1)
        return false;
    stringstream geek(str);
    int x;
    geek >> x;
    return (x >= 0 && x <= 255);
}

int is_valid_ip(char *ip_str)
{
    if (ip_str == NULL)
        return 0;
    int i, num, dots = 0;
    int len = strlen(ip_str);
    int count = 0;
    for (int i = 0; i < len; i++)
        if (ip_str[i] == '.')
            count++;
    if (count != 3)
        return false;
    char *ptr = strtok(ip_str, DELIM);
    if (ptr == NULL)
        return 0;

    while (ptr)
    {
        if (valid_part(ptr))
        {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
                ++dots;
        }
        else
            return 0;
    }
    if (dots != 3)
        return 0;
    return 1;
}

// Driver code
int main()
{
    char ip1[] = "222.111.111.111";
    char ip2[] = "5555..555";
    char ip3[] = "1.2.3.4.5";
    char ip4[] = "1.2.3.4.5.";
    is_valid_ip(ip1) ? cout << "1\n" : cout << "0\n";
    is_valid_ip(ip2) ? cout << "1\n" : cout << "0\n";
    is_valid_ip(ip3) ? cout << "1\n" : cout << "0\n";
    is_valid_ip(ip4) ? cout << "1\n" : cout << "0\n";
    return 0;
}