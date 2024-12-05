#include <iostream>
#include <queue>
#include <deque>
#include<vector>
#include "MyQueue.h"
#include "Song.h"
#include <Windows.h>

int main()
{
    //myQueue::Queue<int> a;
    //a.push_back(7);
    //a.push_back(4);
    //a.push_back(9);
    //a.push_back(2);

    //while (!a.isEmpty())
    //{
    //    cout << "First: " << a.first() << endl;
    //    a.show();
    //    a.pop_front();
    //}
    //a.show();

    vector<Song> all_music;
    ifstream file("music.txt");
    if (file.is_open())
    {
        while (!file.eof())
        {
            Song a;
            a.load(file);
            all_music.push_back(a);
        }
        file.close();
    }
    cout << "Size: " << all_music.size();
    myQueue::Queue<Song> player;
    player.push_back(all_music[5]);
    player.push_back(all_music[1]);
    player.push_back(all_music[5]);
    player.push_back(all_music[3]);
    while (!player.isEmpty())
    {
        player.first().show();
        player.pop_front();
        Sleep(3000);
        system("CLS");
    }
}