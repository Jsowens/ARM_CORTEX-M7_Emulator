#ifndef __CORE_REG_H__
#define __CORE_REG_H__

#include <stdint.h>
#include <util.h>

namespace M7_CORE {
    enum class GenReg32b: uint8_t {
        R0=0, R1=1, R2=2, R3=3, R4=4, R5=5, R6=6, R7=7, R8=8, R9=9, R10=10, R11=11, R12=12,
        SP=13, // Stack Pointer
        LR=14, // Link Register
        PC=15  // Program Counter
    };

    enum class SplReg32b: uint8_t {
        APSR=0, // Application Program Status Register
        IPSR=1, // Interrupt Program Status Register
        EPSR=2  // Execution Program Status Register
    };

    enum class ApsrFlags: uint32_t {
        N=BIT_MASK(31), Z=BIT_MASK(30), C=BIT_MASK(29), V=BIT_MASK(28), Q=BIT_MASK(27),
        GE3=BIT_MASK(19), GE2=BIT_MASK(18), GE1=BIT_MASK(17), GE0=BIT_MASK(16)
    };

    class Core {
        public:
        void setGeneralRegister(GenReg32b reg, uint32_t val);
        uint32_t getGeneralRegister(GenReg32b reg);
        void setSpecialRegister(SplReg32b reg, uint32_t val);
        uint32_t getSpecialRegister(SplReg32b reg);
        void setApsrFlag(ApsrFlags flag);
        void resetApsrFlag(ApsrFlags flag);
        bool getApsrFlag(ApsrFlags flag);
        uint32_t getException();

        private:
        void reset();
        uint32_t genReg[16];
        uint32_t PSR[3];
    };
}

#endif