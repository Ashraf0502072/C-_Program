//============================================================================
// Name        : searching_file.cpp
// Author      : ashraf
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <string>
#include <dirent.h>
#include<cstddef>

using namespace std;

bool has_suffix(const string& s, const string& suffix)
{
    return (s.size() >= suffix.size()) && equal(suffix.rbegin(), suffix.rend(), s.rbegin());
}

int main(int argc, char **argv)
{
    cout << "Directory name: ";
    string path;
    getline(cin, path);

    DIR *dir = opendir(path.c_str());
    if(!dir)
    {
        return 1;
    }

    dirent *entry;
    while((entry = readdir(dir))!=NULL)
    {
        if(has_suffix(entry->d_name, ".docx"))
        {
            cout << entry->d_name << endl;
        }
    }

    closedir(dir);
}
