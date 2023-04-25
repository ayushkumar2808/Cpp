#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

string max_booked_room(vector<string> bookings)
{
    unordered_map<string, int> counts;
    int max_count = 0;
    string max_room = "";
    for (int i = 0; i < bookings.size(); i++)
    {
        string booking = bookings[i];
        string room = booking.substr(1);
        if (booking[0] == '+')
        {
            counts[room]++;
        }
        else
        {
            counts[room]--;
        }
        if (counts[room] > max_count || (counts[room] == max_count && room < max_room))
        {
            max_count = counts[room];
            max_room = room;
        }
    }
    return max_room;
}

int main()
{
    vector<string> bookings = {"+1C", "+3D", "+1B", "-1C", "+2C", "-1B", "+5Z", "+1C", "+1B"};
    // string most_booked_room = max_booked_room(bookings);
    cout << "The most frequently booked room is " << max_booked_room(bookings) << endl;
    return 0;
}