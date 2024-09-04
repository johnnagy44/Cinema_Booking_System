#include <string>
using namespace std;
class MovieC
{
    string m_name;
    string m_genre;

public:
    MovieC(string name, string genre)
    {
        m_name = name;
        m_genre = genre;
    }
    string getName()
    {
        return m_name;
    }
    string getGenre()
    {
        return m_genre;
    }
};