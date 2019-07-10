#ifndef CAT_H
#define CAT_H

namespace Cat
{
    class Info
    {
    public:
        void Meow();
    protected:
        char name[20];
    };

    extern Info cats[20];
    extern int count;

    void CreateAll();
}

#endif
