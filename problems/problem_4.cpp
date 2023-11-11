#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here
    std::string result;
    if (macAddress == "FF:FF:FF:FF:FF:FF"){
        result = "Broadcast";
    } else if ((macAddress[0] + macAddress[1]) % 2 == 0){
        result = "Unicast";
    } else if ((macAddress[0] + macAddress[1]) % 2 != 0){
        result = "Multicast";
    }

    // make use of control flow statements
     return result;
}
