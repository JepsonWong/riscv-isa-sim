require_extension('C');
WRITE_RVC_RS2S(MMU.load_int32(RVC_RS1S.data + insn.rvc_lw_imm()));
