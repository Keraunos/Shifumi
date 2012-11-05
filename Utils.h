/* 
 * File:   Utils.h
 * 
 */

#ifndef UTILS_H
#define	UTILS_H

#include <sstream>

namespace myUtils {

    template<class T> T fromString(const std::string& s) {
        std::istringstream stream(s);
        T t;
        stream >> t;
        return t;
    }
}



#endif	/* UTILS_H */

