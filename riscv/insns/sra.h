WRITE_RD(reg_t(sext_xlen(sext_xlen(RS1.data) >> (RS2.data & (xlen-1)))));
