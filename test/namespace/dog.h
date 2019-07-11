#ifndef DOG_H
#define DOG_H

namespace Dog
{
    class Info
    {
    public:
        void Bark();
    protected:
        char name[20];
    };

    extern Info dogs[20];
    extern int count;

    void CreateAll();
}

#endif
