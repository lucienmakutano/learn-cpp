#include "coll.h"
#include <vector>
#include <iostream>

using namespace std;

void challenge();

void vector_work()
{
    // vector<int> scores{1, 2};
    // vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
    // vector<vector<int>> scores_2d{
    //     {1, 2, 3},
    //     {4, 5, 6}};

    // std::cin >> vowels.at(4);

    // cout << scores[2] << endl;
    // cout << vowels.at(4) << endl;
    // cout << scores_2d.at(1).at(2) << endl;

    challenge();
}

void challenge()
{
    vector<int> v1;
    vector<int> v2;

    v1.push_back(10);
    v1.push_back(20);
    cout << "v1 at 0: " << v1.at(0) << endl;
    cout << "v1 at 1: " << v1.at(1) << endl;
    cout << "v1 size : " << v1.size() << endl;

    v2.push_back(100);
    v2.push_back(200);
    cout << "v2 at 0: " << v2.at(0) << endl;
    cout << "v2 at 1: " << v2.at(1) << endl;
    cout << "v2 size : " << v2.size() << endl;

    vector<vector<int>> v_2d;
    v_2d.push_back(v1);
    v_2d.push_back(v2);
    cout << "v_2d at 0 at 0: " << v_2d.at(0).at(0) << endl;
    cout << "v_2d at 1 at 0: " << v_2d.at(1).at(0) << endl;

    v1.at(0) = 1000;
    cout << "After modif" << endl;
    cout << "===========================" << endl;
    cout << "v_2d at 0 at 0: " << v_2d.at(0).at(0) << endl;
    cout << "v_2d at 0 at 1: " << v_2d.at(1).at(0) << endl;

    cout << "v1 at 0: " << v1.at(0) << endl;
    cout << "v1 at 1: " << v1.at(1) << endl;
}
