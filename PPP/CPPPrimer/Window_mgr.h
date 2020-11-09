#ifndef Window_mgr_h
#define Window_mgr_h
#include <string>
#include <vector>
class Window_mgr {
private: 
    // screens this Window_mgr is tracking 
    // by default, a Window_mgr has one standard sized blank Screen
    std::vector<Screen> screens{Screen(24, 80, ' ') };
};

#endif // Window_mgr_h
