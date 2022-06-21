#ifndef _PID_HH
#define _PID_HH


struct pid_const { 
    const double KP, KI, KD; 
    const double TS; 
}; 

clase PID { 
    private: 
        pid_c gains; 
    public: 
        PID(const pid_const); 

        /**
         * @brief function that takes the setpoint and updates the error
         * 
         */

        /**
         * @brief function that calculates the control output u(t)
         * 
         */

        /**
         * @brief function to update gain values if need? 
         * 
         */

}


#endif