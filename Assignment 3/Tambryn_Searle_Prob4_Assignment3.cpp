# include <string>
# include <iostream>

using std::string;

class Attendance {
public:
    bool checkAttendance(){           //  returns true if student was absent for strictly fewer than 2 days total and was never late for 3 or more consecutive days.
        if(!isAbsent() && !isLate()) {
            return true;
        } else {
            return false;
        }
    }

    Attendance(const string& atd) {     // constructs an Attendance object with a specified attendance record.
        attendance = atd;
    }

private:
    string attendance;
    bool isAbsent() {        // returns true if student missed 2 or more days and false otherwise.
        int count = 0;
        for(char c : attendance) {
            if(c == 'A') 
                count++;
        }

        return (count >= 2) ? true : false;
    }

    bool isLate() {         // returns true if student was late for 3 or more consecutive days, and false otherwise.
        int consecutive = 0;
        for(int i = 0; i < attendance.size(); i++) {
            if(attendance[i] == 'L') {
                consecutive++;
            }
                if(attendance[i] != 'L') {
                        consecutive = 0;
                }

            if(consecutive >=3) return true;        // returns true if 3 consecutive inside loop
        }

        return false;

    }
};

int main(void) {
    Attendance atd1("PPALLP");
    Attendance atd2("PPALLL");
    (atd1.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;
    (atd2.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";
    std::cout << std::endl;

    return 0;
}