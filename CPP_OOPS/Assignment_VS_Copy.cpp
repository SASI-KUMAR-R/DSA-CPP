#include <iostream>

class Movie
{
public:
    std::string name;
    int rating;
    float duration;
    int actorCount ; 
    std::string* actors; 

    // Default Consturtor
    Movie()
    {
        name = "";
        rating = 0;
        duration = 0.0f;
        actorCount = 0;
        actors = nullptr;
    }

    // Parameter Constructor (Updated to handle actors)
    Movie(std::string name, int rating, float duration, int count = 0) 
        : name(name), rating(rating), duration(duration), actorCount(count) 
    {
        if (actorCount > 0) {
            actors = new std::string[actorCount];
        } else {
            actors = nullptr;
        }
    }

    // Copy Constructor 
    Movie(const Movie& movie) 
    {
        name = movie.name ; 
        rating = movie.rating ; 
        duration = movie.duration ; 
        actorCount = movie.actorCount;
        if (actorCount > 0) {
            actors = new std::string[actorCount];
            for (int i = 0; i < actorCount; i++) {
                actors[i] = movie.actors[i];
            }
        } else {
            actors = nullptr;
        }
    }

    // Assignment Opertor 
    Movie& operator=(const Movie& old)
    {
        // Check for self-assignment
        if (this != &old) 
        {
            // Clean up existing memory
            delete[] actors;

            name = old.name ; 
            rating = old.rating ; 
            duration = old.duration ; 
            actorCount = old.actorCount;

            if (actorCount > 0) {
                actors = new std::string[actorCount];
                for (int i = 0; i < actorCount; i++) {
                    actors[i] = old.actors[i];
                }
            } else {
                actors = nullptr;
            }
        }
        
        return *this; // Return reference to the current object
    }

    // Destructor
    ~Movie()
    {
        delete[] actors;
    }
};

int main()
{
    Movie m1;  // Default constructor (Removed parentheses to avoid Most Vexing Parse)

    Movie m2("Bigil",2,183.0f) ; // parameter constructor

    Movie m3(m2) ; // Copy Constructor

    Movie m4 = m3 ; // Again this is gone to copy constructor 

    Movie m5; // Default constructor
    m5 = m4;  // This triggers the Assignment Operator
    
    return 0;
}