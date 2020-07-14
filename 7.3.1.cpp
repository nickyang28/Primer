//
// Created by Feichi Yang on 2020/7/14.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Screen{
friend class Window_mgr;
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' '){}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}
    char get() const {return contents[cursor];}
    inline char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os) {do_display(os); return *this;}
    const Screen &display(std::ostream &os) const {do_display(os); return *this;}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

inline
Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}
char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row + c];
}
inline Screen &Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;
    return *this;
}

class Window_mgr{
public:
    typedef std::vector<Screen>::size_type ScreenIndex;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height * s.width, ' ');
}

int main()
{
    Screen myScreen(5,3);
    const Screen blank(5,3);
    myScreen.set('#').display(cout);
    blank.display(cout);
    return 0;
}