/* Generated automatically from machmode.def and config/riscv/riscv-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  E_VOIDmode,              /* machmode.def:189 */
#define HAVE_VOIDmode
#ifdef USE_ENUM_MODES
#define VOIDmode E_VOIDmode
#else
#define VOIDmode ((void) 0, E_VOIDmode)
#endif
  E_BLKmode,               /* machmode.def:193 */
#define HAVE_BLKmode
#ifdef USE_ENUM_MODES
#define BLKmode E_BLKmode
#else
#define BLKmode ((void) 0, E_BLKmode)
#endif
  E_CCmode,                /* machmode.def:231 */
#define HAVE_CCmode
#ifdef USE_ENUM_MODES
#define CCmode E_CCmode
#else
#define CCmode ((void) 0, E_CCmode)
#endif
  E_BImode,                /* machmode.def:196 */
#define HAVE_BImode
#ifdef USE_ENUM_MODES
#define BImode E_BImode
#else
#define BImode (scalar_int_mode ((scalar_int_mode::from_int) E_BImode))
#endif
  E_QImode,                /* machmode.def:204 */
#define HAVE_QImode
#ifdef USE_ENUM_MODES
#define QImode E_QImode
#else
#define QImode (scalar_int_mode ((scalar_int_mode::from_int) E_QImode))
#endif
  E_HImode,                /* machmode.def:205 */
#define HAVE_HImode
#ifdef USE_ENUM_MODES
#define HImode E_HImode
#else
#define HImode (scalar_int_mode ((scalar_int_mode::from_int) E_HImode))
#endif
  E_SImode,                /* machmode.def:206 */
#define HAVE_SImode
#ifdef USE_ENUM_MODES
#define SImode E_SImode
#else
#define SImode (scalar_int_mode ((scalar_int_mode::from_int) E_SImode))
#endif
  E_DImode,                /* machmode.def:207 */
#define HAVE_DImode
#ifdef USE_ENUM_MODES
#define DImode E_DImode
#else
#define DImode (scalar_int_mode ((scalar_int_mode::from_int) E_DImode))
#endif
  E_TImode,                /* machmode.def:208 */
#define HAVE_TImode
#ifdef USE_ENUM_MODES
#define TImode E_TImode
#else
#define TImode (scalar_int_mode ((scalar_int_mode::from_int) E_TImode))
#endif
  E_TI2mode,               /* config/riscv/riscv-modes.def:59 */
#define HAVE_TI2mode
#ifdef USE_ENUM_MODES
#define TI2mode E_TI2mode
#else
#define TI2mode (scalar_int_mode ((scalar_int_mode::from_int) E_TI2mode))
#endif
  E_EI3mode,               /* config/riscv/riscv-modes.def:60 */
#define HAVE_EI3mode
#ifdef USE_ENUM_MODES
#define EI3mode E_EI3mode
#else
#define EI3mode (scalar_int_mode ((scalar_int_mode::from_int) E_EI3mode))
#endif
  E_OImode,                /* config/riscv/riscv-modes.def:61 */
#define HAVE_OImode
#ifdef USE_ENUM_MODES
#define OImode E_OImode
#else
#define OImode (scalar_int_mode ((scalar_int_mode::from_int) E_OImode))
#endif
  E_OI2mode,               /* config/riscv/riscv-modes.def:62 */
#define HAVE_OI2mode
#ifdef USE_ENUM_MODES
#define OI2mode E_OI2mode
#else
#define OI2mode (scalar_int_mode ((scalar_int_mode::from_int) E_OI2mode))
#endif
  E_OI4mode,               /* config/riscv/riscv-modes.def:63 */
#define HAVE_OI4mode
#ifdef USE_ENUM_MODES
#define OI4mode E_OI4mode
#else
#define OI4mode (scalar_int_mode ((scalar_int_mode::from_int) E_OI4mode))
#endif
  E_FI5mode,               /* config/riscv/riscv-modes.def:64 */
#define HAVE_FI5mode
#ifdef USE_ENUM_MODES
#define FI5mode E_FI5mode
#else
#define FI5mode (scalar_int_mode ((scalar_int_mode::from_int) E_FI5mode))
#endif
  E_CI3mode,               /* config/riscv/riscv-modes.def:65 */
#define HAVE_CI3mode
#ifdef USE_ENUM_MODES
#define CI3mode E_CI3mode
#else
#define CI3mode (scalar_int_mode ((scalar_int_mode::from_int) E_CI3mode))
#endif
  E_CI6mode,               /* config/riscv/riscv-modes.def:66 */
#define HAVE_CI6mode
#ifdef USE_ENUM_MODES
#define CI6mode E_CI6mode
#else
#define CI6mode (scalar_int_mode ((scalar_int_mode::from_int) E_CI6mode))
#endif
  E_RI7mode,               /* config/riscv/riscv-modes.def:67 */
#define HAVE_RI7mode
#ifdef USE_ENUM_MODES
#define RI7mode E_RI7mode
#else
#define RI7mode (scalar_int_mode ((scalar_int_mode::from_int) E_RI7mode))
#endif
  E_XImode,                /* config/riscv/riscv-modes.def:68 */
#define HAVE_XImode
#ifdef USE_ENUM_MODES
#define XImode E_XImode
#else
#define XImode (scalar_int_mode ((scalar_int_mode::from_int) E_XImode))
#endif
  E_XI2mode,               /* config/riscv/riscv-modes.def:69 */
#define HAVE_XI2mode
#ifdef USE_ENUM_MODES
#define XI2mode E_XI2mode
#else
#define XI2mode (scalar_int_mode ((scalar_int_mode::from_int) E_XI2mode))
#endif
  E_XI4mode,               /* config/riscv/riscv-modes.def:70 */
#define HAVE_XI4mode
#ifdef USE_ENUM_MODES
#define XI4mode E_XI4mode
#else
#define XI4mode (scalar_int_mode ((scalar_int_mode::from_int) E_XI4mode))
#endif
  E_XI8mode,               /* config/riscv/riscv-modes.def:71 */
#define HAVE_XI8mode
#ifdef USE_ENUM_MODES
#define XI8mode E_XI8mode
#else
#define XI8mode (scalar_int_mode ((scalar_int_mode::from_int) E_XI8mode))
#endif
  E_VI5mode,               /* config/riscv/riscv-modes.def:72 */
#define HAVE_VI5mode
#ifdef USE_ENUM_MODES
#define VI5mode E_VI5mode
#else
#define VI5mode (scalar_int_mode ((scalar_int_mode::from_int) E_VI5mode))
#endif
  E_YI3mode,               /* config/riscv/riscv-modes.def:73 */
#define HAVE_YI3mode
#ifdef USE_ENUM_MODES
#define YI3mode E_YI3mode
#else
#define YI3mode (scalar_int_mode ((scalar_int_mode::from_int) E_YI3mode))
#endif
  E_YI6mode,               /* config/riscv/riscv-modes.def:74 */
#define HAVE_YI6mode
#ifdef USE_ENUM_MODES
#define YI6mode E_YI6mode
#else
#define YI6mode (scalar_int_mode ((scalar_int_mode::from_int) E_YI6mode))
#endif
  E_WI7mode,               /* config/riscv/riscv-modes.def:75 */
#define HAVE_WI7mode
#ifdef USE_ENUM_MODES
#define WI7mode E_WI7mode
#else
#define WI7mode (scalar_int_mode ((scalar_int_mode::from_int) E_WI7mode))
#endif
  E_ZImode,                /* config/riscv/riscv-modes.def:76 */
#define HAVE_ZImode
#ifdef USE_ENUM_MODES
#define ZImode E_ZImode
#else
#define ZImode (scalar_int_mode ((scalar_int_mode::from_int) E_ZImode))
#endif
  E_ZI2mode,               /* config/riscv/riscv-modes.def:77 */
#define HAVE_ZI2mode
#ifdef USE_ENUM_MODES
#define ZI2mode E_ZI2mode
#else
#define ZI2mode (scalar_int_mode ((scalar_int_mode::from_int) E_ZI2mode))
#endif
  E_ZI4mode,               /* config/riscv/riscv-modes.def:78 */
#define HAVE_ZI4mode
#ifdef USE_ENUM_MODES
#define ZI4mode E_ZI4mode
#else
#define ZI4mode (scalar_int_mode ((scalar_int_mode::from_int) E_ZI4mode))
#endif
  E_ZI8mode,               /* config/riscv/riscv-modes.def:79 */
#define HAVE_ZI8mode
#ifdef USE_ENUM_MODES
#define ZI8mode E_ZI8mode
#else
#define ZI8mode (scalar_int_mode ((scalar_int_mode::from_int) E_ZI8mode))
#endif
  E_QQmode,                /* machmode.def:234 */
#define HAVE_QQmode
#ifdef USE_ENUM_MODES
#define QQmode E_QQmode
#else
#define QQmode (scalar_mode ((scalar_mode::from_int) E_QQmode))
#endif
  E_HQmode,                /* machmode.def:235 */
#define HAVE_HQmode
#ifdef USE_ENUM_MODES
#define HQmode E_HQmode
#else
#define HQmode (scalar_mode ((scalar_mode::from_int) E_HQmode))
#endif
  E_SQmode,                /* machmode.def:236 */
#define HAVE_SQmode
#ifdef USE_ENUM_MODES
#define SQmode E_SQmode
#else
#define SQmode (scalar_mode ((scalar_mode::from_int) E_SQmode))
#endif
  E_DQmode,                /* machmode.def:237 */
#define HAVE_DQmode
#ifdef USE_ENUM_MODES
#define DQmode E_DQmode
#else
#define DQmode (scalar_mode ((scalar_mode::from_int) E_DQmode))
#endif
  E_TQmode,                /* machmode.def:238 */
#define HAVE_TQmode
#ifdef USE_ENUM_MODES
#define TQmode E_TQmode
#else
#define TQmode (scalar_mode ((scalar_mode::from_int) E_TQmode))
#endif
  E_UQQmode,               /* machmode.def:240 */
#define HAVE_UQQmode
#ifdef USE_ENUM_MODES
#define UQQmode E_UQQmode
#else
#define UQQmode (scalar_mode ((scalar_mode::from_int) E_UQQmode))
#endif
  E_UHQmode,               /* machmode.def:241 */
#define HAVE_UHQmode
#ifdef USE_ENUM_MODES
#define UHQmode E_UHQmode
#else
#define UHQmode (scalar_mode ((scalar_mode::from_int) E_UHQmode))
#endif
  E_USQmode,               /* machmode.def:242 */
#define HAVE_USQmode
#ifdef USE_ENUM_MODES
#define USQmode E_USQmode
#else
#define USQmode (scalar_mode ((scalar_mode::from_int) E_USQmode))
#endif
  E_UDQmode,               /* machmode.def:243 */
#define HAVE_UDQmode
#ifdef USE_ENUM_MODES
#define UDQmode E_UDQmode
#else
#define UDQmode (scalar_mode ((scalar_mode::from_int) E_UDQmode))
#endif
  E_UTQmode,               /* machmode.def:244 */
#define HAVE_UTQmode
#ifdef USE_ENUM_MODES
#define UTQmode E_UTQmode
#else
#define UTQmode (scalar_mode ((scalar_mode::from_int) E_UTQmode))
#endif
  E_HAmode,                /* machmode.def:246 */
#define HAVE_HAmode
#ifdef USE_ENUM_MODES
#define HAmode E_HAmode
#else
#define HAmode (scalar_mode ((scalar_mode::from_int) E_HAmode))
#endif
  E_SAmode,                /* machmode.def:247 */
#define HAVE_SAmode
#ifdef USE_ENUM_MODES
#define SAmode E_SAmode
#else
#define SAmode (scalar_mode ((scalar_mode::from_int) E_SAmode))
#endif
  E_DAmode,                /* machmode.def:248 */
#define HAVE_DAmode
#ifdef USE_ENUM_MODES
#define DAmode E_DAmode
#else
#define DAmode (scalar_mode ((scalar_mode::from_int) E_DAmode))
#endif
  E_TAmode,                /* machmode.def:249 */
#define HAVE_TAmode
#ifdef USE_ENUM_MODES
#define TAmode E_TAmode
#else
#define TAmode (scalar_mode ((scalar_mode::from_int) E_TAmode))
#endif
  E_UHAmode,               /* machmode.def:251 */
#define HAVE_UHAmode
#ifdef USE_ENUM_MODES
#define UHAmode E_UHAmode
#else
#define UHAmode (scalar_mode ((scalar_mode::from_int) E_UHAmode))
#endif
  E_USAmode,               /* machmode.def:252 */
#define HAVE_USAmode
#ifdef USE_ENUM_MODES
#define USAmode E_USAmode
#else
#define USAmode (scalar_mode ((scalar_mode::from_int) E_USAmode))
#endif
  E_UDAmode,               /* machmode.def:253 */
#define HAVE_UDAmode
#ifdef USE_ENUM_MODES
#define UDAmode E_UDAmode
#else
#define UDAmode (scalar_mode ((scalar_mode::from_int) E_UDAmode))
#endif
  E_UTAmode,               /* machmode.def:254 */
#define HAVE_UTAmode
#ifdef USE_ENUM_MODES
#define UTAmode E_UTAmode
#else
#define UTAmode (scalar_mode ((scalar_mode::from_int) E_UTAmode))
#endif
  E_HFmode,                /* config/riscv/riscv-modes.def:22 */
#define HAVE_HFmode
#ifdef USE_ENUM_MODES
#define HFmode E_HFmode
#else
#define HFmode (scalar_float_mode ((scalar_float_mode::from_int) E_HFmode))
#endif
  E_SFmode,                /* machmode.def:226 */
#define HAVE_SFmode
#ifdef USE_ENUM_MODES
#define SFmode E_SFmode
#else
#define SFmode (scalar_float_mode ((scalar_float_mode::from_int) E_SFmode))
#endif
  E_DFmode,                /* machmode.def:227 */
#define HAVE_DFmode
#ifdef USE_ENUM_MODES
#define DFmode E_DFmode
#else
#define DFmode (scalar_float_mode ((scalar_float_mode::from_int) E_DFmode))
#endif
  E_TFmode,                /* config/riscv/riscv-modes.def:23 */
#define HAVE_TFmode
#ifdef USE_ENUM_MODES
#define TFmode E_TFmode
#else
#define TFmode (scalar_float_mode ((scalar_float_mode::from_int) E_TFmode))
#endif
  E_SDmode,                /* machmode.def:267 */
#define HAVE_SDmode
#ifdef USE_ENUM_MODES
#define SDmode E_SDmode
#else
#define SDmode (scalar_float_mode ((scalar_float_mode::from_int) E_SDmode))
#endif
  E_DDmode,                /* machmode.def:268 */
#define HAVE_DDmode
#ifdef USE_ENUM_MODES
#define DDmode E_DDmode
#else
#define DDmode (scalar_float_mode ((scalar_float_mode::from_int) E_DDmode))
#endif
  E_TDmode,                /* machmode.def:269 */
#define HAVE_TDmode
#ifdef USE_ENUM_MODES
#define TDmode E_TDmode
#else
#define TDmode (scalar_float_mode ((scalar_float_mode::from_int) E_TDmode))
#endif
  E_CQImode,               /* machmode.def:262 */
#define HAVE_CQImode
#ifdef USE_ENUM_MODES
#define CQImode E_CQImode
#else
#define CQImode (complex_mode ((complex_mode::from_int) E_CQImode))
#endif
  E_CHImode,               /* machmode.def:262 */
#define HAVE_CHImode
#ifdef USE_ENUM_MODES
#define CHImode E_CHImode
#else
#define CHImode (complex_mode ((complex_mode::from_int) E_CHImode))
#endif
  E_CSImode,               /* machmode.def:262 */
#define HAVE_CSImode
#ifdef USE_ENUM_MODES
#define CSImode E_CSImode
#else
#define CSImode (complex_mode ((complex_mode::from_int) E_CSImode))
#endif
  E_CDImode,               /* machmode.def:262 */
#define HAVE_CDImode
#ifdef USE_ENUM_MODES
#define CDImode E_CDImode
#else
#define CDImode (complex_mode ((complex_mode::from_int) E_CDImode))
#endif
  E_CTI2mode,              /* machmode.def:262 */
#define HAVE_CTI2mode
#ifdef USE_ENUM_MODES
#define CTI2mode E_CTI2mode
#else
#define CTI2mode (complex_mode ((complex_mode::from_int) E_CTI2mode))
#endif
  E_CTImode,               /* machmode.def:262 */
#define HAVE_CTImode
#ifdef USE_ENUM_MODES
#define CTImode E_CTImode
#else
#define CTImode (complex_mode ((complex_mode::from_int) E_CTImode))
#endif
  E_CEI3mode,              /* machmode.def:262 */
#define HAVE_CEI3mode
#ifdef USE_ENUM_MODES
#define CEI3mode E_CEI3mode
#else
#define CEI3mode (complex_mode ((complex_mode::from_int) E_CEI3mode))
#endif
  E_COI4mode,              /* machmode.def:262 */
#define HAVE_COI4mode
#ifdef USE_ENUM_MODES
#define COI4mode E_COI4mode
#else
#define COI4mode (complex_mode ((complex_mode::from_int) E_COI4mode))
#endif
  E_COI2mode,              /* machmode.def:262 */
#define HAVE_COI2mode
#ifdef USE_ENUM_MODES
#define COI2mode E_COI2mode
#else
#define COI2mode (complex_mode ((complex_mode::from_int) E_COI2mode))
#endif
  E_COImode,               /* machmode.def:262 */
#define HAVE_COImode
#ifdef USE_ENUM_MODES
#define COImode E_COImode
#else
#define COImode (complex_mode ((complex_mode::from_int) E_COImode))
#endif
  E_CFI5mode,              /* machmode.def:262 */
#define HAVE_CFI5mode
#ifdef USE_ENUM_MODES
#define CFI5mode E_CFI5mode
#else
#define CFI5mode (complex_mode ((complex_mode::from_int) E_CFI5mode))
#endif
  E_CCI6mode,              /* machmode.def:262 */
#define HAVE_CCI6mode
#ifdef USE_ENUM_MODES
#define CCI6mode E_CCI6mode
#else
#define CCI6mode (complex_mode ((complex_mode::from_int) E_CCI6mode))
#endif
  E_CCI3mode,              /* machmode.def:262 */
#define HAVE_CCI3mode
#ifdef USE_ENUM_MODES
#define CCI3mode E_CCI3mode
#else
#define CCI3mode (complex_mode ((complex_mode::from_int) E_CCI3mode))
#endif
  E_CRI7mode,              /* machmode.def:262 */
#define HAVE_CRI7mode
#ifdef USE_ENUM_MODES
#define CRI7mode E_CRI7mode
#else
#define CRI7mode (complex_mode ((complex_mode::from_int) E_CRI7mode))
#endif
  E_CXI8mode,              /* machmode.def:262 */
#define HAVE_CXI8mode
#ifdef USE_ENUM_MODES
#define CXI8mode E_CXI8mode
#else
#define CXI8mode (complex_mode ((complex_mode::from_int) E_CXI8mode))
#endif
  E_CXI4mode,              /* machmode.def:262 */
#define HAVE_CXI4mode
#ifdef USE_ENUM_MODES
#define CXI4mode E_CXI4mode
#else
#define CXI4mode (complex_mode ((complex_mode::from_int) E_CXI4mode))
#endif
  E_CXI2mode,              /* machmode.def:262 */
#define HAVE_CXI2mode
#ifdef USE_ENUM_MODES
#define CXI2mode E_CXI2mode
#else
#define CXI2mode (complex_mode ((complex_mode::from_int) E_CXI2mode))
#endif
  E_CXImode,               /* machmode.def:262 */
#define HAVE_CXImode
#ifdef USE_ENUM_MODES
#define CXImode E_CXImode
#else
#define CXImode (complex_mode ((complex_mode::from_int) E_CXImode))
#endif
  E_CVI5mode,              /* machmode.def:262 */
#define HAVE_CVI5mode
#ifdef USE_ENUM_MODES
#define CVI5mode E_CVI5mode
#else
#define CVI5mode (complex_mode ((complex_mode::from_int) E_CVI5mode))
#endif
  E_CYI6mode,              /* machmode.def:262 */
#define HAVE_CYI6mode
#ifdef USE_ENUM_MODES
#define CYI6mode E_CYI6mode
#else
#define CYI6mode (complex_mode ((complex_mode::from_int) E_CYI6mode))
#endif
  E_CYI3mode,              /* machmode.def:262 */
#define HAVE_CYI3mode
#ifdef USE_ENUM_MODES
#define CYI3mode E_CYI3mode
#else
#define CYI3mode (complex_mode ((complex_mode::from_int) E_CYI3mode))
#endif
  E_CWI7mode,              /* machmode.def:262 */
#define HAVE_CWI7mode
#ifdef USE_ENUM_MODES
#define CWI7mode E_CWI7mode
#else
#define CWI7mode (complex_mode ((complex_mode::from_int) E_CWI7mode))
#endif
  E_CZI8mode,              /* machmode.def:262 */
#define HAVE_CZI8mode
#ifdef USE_ENUM_MODES
#define CZI8mode E_CZI8mode
#else
#define CZI8mode (complex_mode ((complex_mode::from_int) E_CZI8mode))
#endif
  E_CZI4mode,              /* machmode.def:262 */
#define HAVE_CZI4mode
#ifdef USE_ENUM_MODES
#define CZI4mode E_CZI4mode
#else
#define CZI4mode (complex_mode ((complex_mode::from_int) E_CZI4mode))
#endif
  E_CZI2mode,              /* machmode.def:262 */
#define HAVE_CZI2mode
#ifdef USE_ENUM_MODES
#define CZI2mode E_CZI2mode
#else
#define CZI2mode (complex_mode ((complex_mode::from_int) E_CZI2mode))
#endif
  E_CZImode,               /* machmode.def:262 */
#define HAVE_CZImode
#ifdef USE_ENUM_MODES
#define CZImode E_CZImode
#else
#define CZImode (complex_mode ((complex_mode::from_int) E_CZImode))
#endif
  E_HCmode,                /* machmode.def:264 */
#define HAVE_HCmode
#ifdef USE_ENUM_MODES
#define HCmode E_HCmode
#else
#define HCmode (complex_mode ((complex_mode::from_int) E_HCmode))
#endif
  E_SCmode,                /* machmode.def:264 */
#define HAVE_SCmode
#ifdef USE_ENUM_MODES
#define SCmode E_SCmode
#else
#define SCmode (complex_mode ((complex_mode::from_int) E_SCmode))
#endif
  E_DCmode,                /* machmode.def:264 */
#define HAVE_DCmode
#ifdef USE_ENUM_MODES
#define DCmode E_DCmode
#else
#define DCmode (complex_mode ((complex_mode::from_int) E_DCmode))
#endif
  E_TCmode,                /* machmode.def:264 */
#define HAVE_TCmode
#ifdef USE_ENUM_MODES
#define TCmode E_TCmode
#else
#define TCmode (complex_mode ((complex_mode::from_int) E_TCmode))
#endif
  E_V8QImode,              /* config/riscv/riscv-modes.def:26 */
#define HAVE_V8QImode
#ifdef USE_ENUM_MODES
#define V8QImode E_V8QImode
#else
#define V8QImode ((void) 0, E_V8QImode)
#endif
  E_V4HImode,              /* config/riscv/riscv-modes.def:26 */
#define HAVE_V4HImode
#ifdef USE_ENUM_MODES
#define V4HImode E_V4HImode
#else
#define V4HImode ((void) 0, E_V4HImode)
#endif
  E_V2SImode,              /* config/riscv/riscv-modes.def:26 */
#define HAVE_V2SImode
#ifdef USE_ENUM_MODES
#define V2SImode E_V2SImode
#else
#define V2SImode ((void) 0, E_V2SImode)
#endif
  E_V1DImode,              /* config/riscv/riscv-modes.def:40 */
#define HAVE_V1DImode
#ifdef USE_ENUM_MODES
#define V1DImode E_V1DImode
#else
#define V1DImode ((void) 0, E_V1DImode)
#endif
  E_V16QImode,             /* config/riscv/riscv-modes.def:27 */
#define HAVE_V16QImode
#ifdef USE_ENUM_MODES
#define V16QImode E_V16QImode
#else
#define V16QImode ((void) 0, E_V16QImode)
#endif
  E_V8HImode,              /* config/riscv/riscv-modes.def:27 */
#define HAVE_V8HImode
#ifdef USE_ENUM_MODES
#define V8HImode E_V8HImode
#else
#define V8HImode ((void) 0, E_V8HImode)
#endif
  E_V4SImode,              /* config/riscv/riscv-modes.def:27 */
#define HAVE_V4SImode
#ifdef USE_ENUM_MODES
#define V4SImode E_V4SImode
#else
#define V4SImode ((void) 0, E_V4SImode)
#endif
  E_V2DImode,              /* config/riscv/riscv-modes.def:27 */
#define HAVE_V2DImode
#ifdef USE_ENUM_MODES
#define V2DImode E_V2DImode
#else
#define V2DImode ((void) 0, E_V2DImode)
#endif
  E_V1TImode,              /* config/riscv/riscv-modes.def:41 */
#define HAVE_V1TImode
#ifdef USE_ENUM_MODES
#define V1TImode E_V1TImode
#else
#define V1TImode ((void) 0, E_V1TImode)
#endif
  E_V24QImode,             /* config/riscv/riscv-modes.def:43 */
#define HAVE_V24QImode
#ifdef USE_ENUM_MODES
#define V24QImode E_V24QImode
#else
#define V24QImode ((void) 0, E_V24QImode)
#endif
  E_V12HImode,             /* config/riscv/riscv-modes.def:43 */
#define HAVE_V12HImode
#ifdef USE_ENUM_MODES
#define V12HImode E_V12HImode
#else
#define V12HImode ((void) 0, E_V12HImode)
#endif
  E_V6SImode,              /* config/riscv/riscv-modes.def:43 */
#define HAVE_V6SImode
#ifdef USE_ENUM_MODES
#define V6SImode E_V6SImode
#else
#define V6SImode ((void) 0, E_V6SImode)
#endif
  E_V3DImode,              /* config/riscv/riscv-modes.def:43 */
#define HAVE_V3DImode
#ifdef USE_ENUM_MODES
#define V3DImode E_V3DImode
#else
#define V3DImode ((void) 0, E_V3DImode)
#endif
  E_V32QImode,             /* config/riscv/riscv-modes.def:28 */
#define HAVE_V32QImode
#ifdef USE_ENUM_MODES
#define V32QImode E_V32QImode
#else
#define V32QImode ((void) 0, E_V32QImode)
#endif
  E_V16HImode,             /* config/riscv/riscv-modes.def:28 */
#define HAVE_V16HImode
#ifdef USE_ENUM_MODES
#define V16HImode E_V16HImode
#else
#define V16HImode ((void) 0, E_V16HImode)
#endif
  E_V8SImode,              /* config/riscv/riscv-modes.def:28 */
#define HAVE_V8SImode
#ifdef USE_ENUM_MODES
#define V8SImode E_V8SImode
#else
#define V8SImode ((void) 0, E_V8SImode)
#endif
  E_V4DImode,              /* config/riscv/riscv-modes.def:28 */
#define HAVE_V4DImode
#ifdef USE_ENUM_MODES
#define V4DImode E_V4DImode
#else
#define V4DImode ((void) 0, E_V4DImode)
#endif
  E_V2TImode,              /* config/riscv/riscv-modes.def:28 */
#define HAVE_V2TImode
#ifdef USE_ENUM_MODES
#define V2TImode E_V2TImode
#else
#define V2TImode ((void) 0, E_V2TImode)
#endif
  E_V40QImode,             /* config/riscv/riscv-modes.def:44 */
#define HAVE_V40QImode
#ifdef USE_ENUM_MODES
#define V40QImode E_V40QImode
#else
#define V40QImode ((void) 0, E_V40QImode)
#endif
  E_V20HImode,             /* config/riscv/riscv-modes.def:44 */
#define HAVE_V20HImode
#ifdef USE_ENUM_MODES
#define V20HImode E_V20HImode
#else
#define V20HImode ((void) 0, E_V20HImode)
#endif
  E_V10SImode,             /* config/riscv/riscv-modes.def:44 */
#define HAVE_V10SImode
#ifdef USE_ENUM_MODES
#define V10SImode E_V10SImode
#else
#define V10SImode ((void) 0, E_V10SImode)
#endif
  E_V5DImode,              /* config/riscv/riscv-modes.def:44 */
#define HAVE_V5DImode
#ifdef USE_ENUM_MODES
#define V5DImode E_V5DImode
#else
#define V5DImode ((void) 0, E_V5DImode)
#endif
  E_V48QImode,             /* config/riscv/riscv-modes.def:45 */
#define HAVE_V48QImode
#ifdef USE_ENUM_MODES
#define V48QImode E_V48QImode
#else
#define V48QImode ((void) 0, E_V48QImode)
#endif
  E_V24HImode,             /* config/riscv/riscv-modes.def:45 */
#define HAVE_V24HImode
#ifdef USE_ENUM_MODES
#define V24HImode E_V24HImode
#else
#define V24HImode ((void) 0, E_V24HImode)
#endif
  E_V12SImode,             /* config/riscv/riscv-modes.def:45 */
#define HAVE_V12SImode
#ifdef USE_ENUM_MODES
#define V12SImode E_V12SImode
#else
#define V12SImode ((void) 0, E_V12SImode)
#endif
  E_V6DImode,              /* config/riscv/riscv-modes.def:45 */
#define HAVE_V6DImode
#ifdef USE_ENUM_MODES
#define V6DImode E_V6DImode
#else
#define V6DImode ((void) 0, E_V6DImode)
#endif
  E_V3TImode,              /* config/riscv/riscv-modes.def:45 */
#define HAVE_V3TImode
#ifdef USE_ENUM_MODES
#define V3TImode E_V3TImode
#else
#define V3TImode ((void) 0, E_V3TImode)
#endif
  E_V56QImode,             /* config/riscv/riscv-modes.def:46 */
#define HAVE_V56QImode
#ifdef USE_ENUM_MODES
#define V56QImode E_V56QImode
#else
#define V56QImode ((void) 0, E_V56QImode)
#endif
  E_V28HImode,             /* config/riscv/riscv-modes.def:46 */
#define HAVE_V28HImode
#ifdef USE_ENUM_MODES
#define V28HImode E_V28HImode
#else
#define V28HImode ((void) 0, E_V28HImode)
#endif
  E_V14SImode,             /* config/riscv/riscv-modes.def:46 */
#define HAVE_V14SImode
#ifdef USE_ENUM_MODES
#define V14SImode E_V14SImode
#else
#define V14SImode ((void) 0, E_V14SImode)
#endif
  E_V7DImode,              /* config/riscv/riscv-modes.def:46 */
#define HAVE_V7DImode
#ifdef USE_ENUM_MODES
#define V7DImode E_V7DImode
#else
#define V7DImode ((void) 0, E_V7DImode)
#endif
  E_V64QImode,             /* config/riscv/riscv-modes.def:29 */
#define HAVE_V64QImode
#ifdef USE_ENUM_MODES
#define V64QImode E_V64QImode
#else
#define V64QImode ((void) 0, E_V64QImode)
#endif
  E_V32HImode,             /* config/riscv/riscv-modes.def:29 */
#define HAVE_V32HImode
#ifdef USE_ENUM_MODES
#define V32HImode E_V32HImode
#else
#define V32HImode ((void) 0, E_V32HImode)
#endif
  E_V16SImode,             /* config/riscv/riscv-modes.def:29 */
#define HAVE_V16SImode
#ifdef USE_ENUM_MODES
#define V16SImode E_V16SImode
#else
#define V16SImode ((void) 0, E_V16SImode)
#endif
  E_V8DImode,              /* config/riscv/riscv-modes.def:29 */
#define HAVE_V8DImode
#ifdef USE_ENUM_MODES
#define V8DImode E_V8DImode
#else
#define V8DImode ((void) 0, E_V8DImode)
#endif
  E_V4TImode,              /* config/riscv/riscv-modes.def:29 */
#define HAVE_V4TImode
#ifdef USE_ENUM_MODES
#define V4TImode E_V4TImode
#else
#define V4TImode ((void) 0, E_V4TImode)
#endif
  E_V80QImode,             /* config/riscv/riscv-modes.def:47 */
#define HAVE_V80QImode
#ifdef USE_ENUM_MODES
#define V80QImode E_V80QImode
#else
#define V80QImode ((void) 0, E_V80QImode)
#endif
  E_V40HImode,             /* config/riscv/riscv-modes.def:47 */
#define HAVE_V40HImode
#ifdef USE_ENUM_MODES
#define V40HImode E_V40HImode
#else
#define V40HImode ((void) 0, E_V40HImode)
#endif
  E_V20SImode,             /* config/riscv/riscv-modes.def:47 */
#define HAVE_V20SImode
#ifdef USE_ENUM_MODES
#define V20SImode E_V20SImode
#else
#define V20SImode ((void) 0, E_V20SImode)
#endif
  E_V10DImode,             /* config/riscv/riscv-modes.def:47 */
#define HAVE_V10DImode
#ifdef USE_ENUM_MODES
#define V10DImode E_V10DImode
#else
#define V10DImode ((void) 0, E_V10DImode)
#endif
  E_V5TImode,              /* config/riscv/riscv-modes.def:47 */
#define HAVE_V5TImode
#ifdef USE_ENUM_MODES
#define V5TImode E_V5TImode
#else
#define V5TImode ((void) 0, E_V5TImode)
#endif
  E_V96QImode,             /* config/riscv/riscv-modes.def:48 */
#define HAVE_V96QImode
#ifdef USE_ENUM_MODES
#define V96QImode E_V96QImode
#else
#define V96QImode ((void) 0, E_V96QImode)
#endif
  E_V48HImode,             /* config/riscv/riscv-modes.def:48 */
#define HAVE_V48HImode
#ifdef USE_ENUM_MODES
#define V48HImode E_V48HImode
#else
#define V48HImode ((void) 0, E_V48HImode)
#endif
  E_V24SImode,             /* config/riscv/riscv-modes.def:48 */
#define HAVE_V24SImode
#ifdef USE_ENUM_MODES
#define V24SImode E_V24SImode
#else
#define V24SImode ((void) 0, E_V24SImode)
#endif
  E_V12DImode,             /* config/riscv/riscv-modes.def:48 */
#define HAVE_V12DImode
#ifdef USE_ENUM_MODES
#define V12DImode E_V12DImode
#else
#define V12DImode ((void) 0, E_V12DImode)
#endif
  E_V6TImode,              /* config/riscv/riscv-modes.def:48 */
#define HAVE_V6TImode
#ifdef USE_ENUM_MODES
#define V6TImode E_V6TImode
#else
#define V6TImode ((void) 0, E_V6TImode)
#endif
  E_V112QImode,            /* config/riscv/riscv-modes.def:49 */
#define HAVE_V112QImode
#ifdef USE_ENUM_MODES
#define V112QImode E_V112QImode
#else
#define V112QImode ((void) 0, E_V112QImode)
#endif
  E_V56HImode,             /* config/riscv/riscv-modes.def:49 */
#define HAVE_V56HImode
#ifdef USE_ENUM_MODES
#define V56HImode E_V56HImode
#else
#define V56HImode ((void) 0, E_V56HImode)
#endif
  E_V28SImode,             /* config/riscv/riscv-modes.def:49 */
#define HAVE_V28SImode
#ifdef USE_ENUM_MODES
#define V28SImode E_V28SImode
#else
#define V28SImode ((void) 0, E_V28SImode)
#endif
  E_V14DImode,             /* config/riscv/riscv-modes.def:49 */
#define HAVE_V14DImode
#ifdef USE_ENUM_MODES
#define V14DImode E_V14DImode
#else
#define V14DImode ((void) 0, E_V14DImode)
#endif
  E_V7TImode,              /* config/riscv/riscv-modes.def:49 */
#define HAVE_V7TImode
#ifdef USE_ENUM_MODES
#define V7TImode E_V7TImode
#else
#define V7TImode ((void) 0, E_V7TImode)
#endif
  E_V128QImode,            /* config/riscv/riscv-modes.def:30 */
#define HAVE_V128QImode
#ifdef USE_ENUM_MODES
#define V128QImode E_V128QImode
#else
#define V128QImode ((void) 0, E_V128QImode)
#endif
  E_V64HImode,             /* config/riscv/riscv-modes.def:30 */
#define HAVE_V64HImode
#ifdef USE_ENUM_MODES
#define V64HImode E_V64HImode
#else
#define V64HImode ((void) 0, E_V64HImode)
#endif
  E_V32SImode,             /* config/riscv/riscv-modes.def:30 */
#define HAVE_V32SImode
#ifdef USE_ENUM_MODES
#define V32SImode E_V32SImode
#else
#define V32SImode ((void) 0, E_V32SImode)
#endif
  E_V16DImode,             /* config/riscv/riscv-modes.def:30 */
#define HAVE_V16DImode
#ifdef USE_ENUM_MODES
#define V16DImode E_V16DImode
#else
#define V16DImode ((void) 0, E_V16DImode)
#endif
  E_V8TImode,              /* config/riscv/riscv-modes.def:30 */
#define HAVE_V8TImode
#ifdef USE_ENUM_MODES
#define V8TImode E_V8TImode
#else
#define V8TImode ((void) 0, E_V8TImode)
#endif
  E_V4HFmode,              /* config/riscv/riscv-modes.def:32 */
#define HAVE_V4HFmode
#ifdef USE_ENUM_MODES
#define V4HFmode E_V4HFmode
#else
#define V4HFmode ((void) 0, E_V4HFmode)
#endif
  E_V2SFmode,              /* config/riscv/riscv-modes.def:32 */
#define HAVE_V2SFmode
#ifdef USE_ENUM_MODES
#define V2SFmode E_V2SFmode
#else
#define V2SFmode ((void) 0, E_V2SFmode)
#endif
  E_V1DFmode,              /* config/riscv/riscv-modes.def:38 */
#define HAVE_V1DFmode
#ifdef USE_ENUM_MODES
#define V1DFmode E_V1DFmode
#else
#define V1DFmode ((void) 0, E_V1DFmode)
#endif
  E_V8HFmode,              /* config/riscv/riscv-modes.def:33 */
#define HAVE_V8HFmode
#ifdef USE_ENUM_MODES
#define V8HFmode E_V8HFmode
#else
#define V8HFmode ((void) 0, E_V8HFmode)
#endif
  E_V4SFmode,              /* config/riscv/riscv-modes.def:33 */
#define HAVE_V4SFmode
#ifdef USE_ENUM_MODES
#define V4SFmode E_V4SFmode
#else
#define V4SFmode ((void) 0, E_V4SFmode)
#endif
  E_V2DFmode,              /* config/riscv/riscv-modes.def:33 */
#define HAVE_V2DFmode
#ifdef USE_ENUM_MODES
#define V2DFmode E_V2DFmode
#else
#define V2DFmode ((void) 0, E_V2DFmode)
#endif
  E_V1TFmode,              /* config/riscv/riscv-modes.def:39 */
#define HAVE_V1TFmode
#ifdef USE_ENUM_MODES
#define V1TFmode E_V1TFmode
#else
#define V1TFmode ((void) 0, E_V1TFmode)
#endif
  E_V12HFmode,             /* config/riscv/riscv-modes.def:51 */
#define HAVE_V12HFmode
#ifdef USE_ENUM_MODES
#define V12HFmode E_V12HFmode
#else
#define V12HFmode ((void) 0, E_V12HFmode)
#endif
  E_V6SFmode,              /* config/riscv/riscv-modes.def:51 */
#define HAVE_V6SFmode
#ifdef USE_ENUM_MODES
#define V6SFmode E_V6SFmode
#else
#define V6SFmode ((void) 0, E_V6SFmode)
#endif
  E_V3DFmode,              /* config/riscv/riscv-modes.def:51 */
#define HAVE_V3DFmode
#ifdef USE_ENUM_MODES
#define V3DFmode E_V3DFmode
#else
#define V3DFmode ((void) 0, E_V3DFmode)
#endif
  E_V16HFmode,             /* config/riscv/riscv-modes.def:34 */
#define HAVE_V16HFmode
#ifdef USE_ENUM_MODES
#define V16HFmode E_V16HFmode
#else
#define V16HFmode ((void) 0, E_V16HFmode)
#endif
  E_V8SFmode,              /* config/riscv/riscv-modes.def:34 */
#define HAVE_V8SFmode
#ifdef USE_ENUM_MODES
#define V8SFmode E_V8SFmode
#else
#define V8SFmode ((void) 0, E_V8SFmode)
#endif
  E_V4DFmode,              /* config/riscv/riscv-modes.def:34 */
#define HAVE_V4DFmode
#ifdef USE_ENUM_MODES
#define V4DFmode E_V4DFmode
#else
#define V4DFmode ((void) 0, E_V4DFmode)
#endif
  E_V2TFmode,              /* config/riscv/riscv-modes.def:34 */
#define HAVE_V2TFmode
#ifdef USE_ENUM_MODES
#define V2TFmode E_V2TFmode
#else
#define V2TFmode ((void) 0, E_V2TFmode)
#endif
  E_V20HFmode,             /* config/riscv/riscv-modes.def:52 */
#define HAVE_V20HFmode
#ifdef USE_ENUM_MODES
#define V20HFmode E_V20HFmode
#else
#define V20HFmode ((void) 0, E_V20HFmode)
#endif
  E_V10SFmode,             /* config/riscv/riscv-modes.def:52 */
#define HAVE_V10SFmode
#ifdef USE_ENUM_MODES
#define V10SFmode E_V10SFmode
#else
#define V10SFmode ((void) 0, E_V10SFmode)
#endif
  E_V5DFmode,              /* config/riscv/riscv-modes.def:52 */
#define HAVE_V5DFmode
#ifdef USE_ENUM_MODES
#define V5DFmode E_V5DFmode
#else
#define V5DFmode ((void) 0, E_V5DFmode)
#endif
  E_V24HFmode,             /* config/riscv/riscv-modes.def:53 */
#define HAVE_V24HFmode
#ifdef USE_ENUM_MODES
#define V24HFmode E_V24HFmode
#else
#define V24HFmode ((void) 0, E_V24HFmode)
#endif
  E_V12SFmode,             /* config/riscv/riscv-modes.def:53 */
#define HAVE_V12SFmode
#ifdef USE_ENUM_MODES
#define V12SFmode E_V12SFmode
#else
#define V12SFmode ((void) 0, E_V12SFmode)
#endif
  E_V6DFmode,              /* config/riscv/riscv-modes.def:53 */
#define HAVE_V6DFmode
#ifdef USE_ENUM_MODES
#define V6DFmode E_V6DFmode
#else
#define V6DFmode ((void) 0, E_V6DFmode)
#endif
  E_V3TFmode,              /* config/riscv/riscv-modes.def:53 */
#define HAVE_V3TFmode
#ifdef USE_ENUM_MODES
#define V3TFmode E_V3TFmode
#else
#define V3TFmode ((void) 0, E_V3TFmode)
#endif
  E_V28HFmode,             /* config/riscv/riscv-modes.def:54 */
#define HAVE_V28HFmode
#ifdef USE_ENUM_MODES
#define V28HFmode E_V28HFmode
#else
#define V28HFmode ((void) 0, E_V28HFmode)
#endif
  E_V14SFmode,             /* config/riscv/riscv-modes.def:54 */
#define HAVE_V14SFmode
#ifdef USE_ENUM_MODES
#define V14SFmode E_V14SFmode
#else
#define V14SFmode ((void) 0, E_V14SFmode)
#endif
  E_V7DFmode,              /* config/riscv/riscv-modes.def:54 */
#define HAVE_V7DFmode
#ifdef USE_ENUM_MODES
#define V7DFmode E_V7DFmode
#else
#define V7DFmode ((void) 0, E_V7DFmode)
#endif
  E_V32HFmode,             /* config/riscv/riscv-modes.def:35 */
#define HAVE_V32HFmode
#ifdef USE_ENUM_MODES
#define V32HFmode E_V32HFmode
#else
#define V32HFmode ((void) 0, E_V32HFmode)
#endif
  E_V16SFmode,             /* config/riscv/riscv-modes.def:35 */
#define HAVE_V16SFmode
#ifdef USE_ENUM_MODES
#define V16SFmode E_V16SFmode
#else
#define V16SFmode ((void) 0, E_V16SFmode)
#endif
  E_V8DFmode,              /* config/riscv/riscv-modes.def:35 */
#define HAVE_V8DFmode
#ifdef USE_ENUM_MODES
#define V8DFmode E_V8DFmode
#else
#define V8DFmode ((void) 0, E_V8DFmode)
#endif
  E_V4TFmode,              /* config/riscv/riscv-modes.def:35 */
#define HAVE_V4TFmode
#ifdef USE_ENUM_MODES
#define V4TFmode E_V4TFmode
#else
#define V4TFmode ((void) 0, E_V4TFmode)
#endif
  E_V40HFmode,             /* config/riscv/riscv-modes.def:55 */
#define HAVE_V40HFmode
#ifdef USE_ENUM_MODES
#define V40HFmode E_V40HFmode
#else
#define V40HFmode ((void) 0, E_V40HFmode)
#endif
  E_V20SFmode,             /* config/riscv/riscv-modes.def:55 */
#define HAVE_V20SFmode
#ifdef USE_ENUM_MODES
#define V20SFmode E_V20SFmode
#else
#define V20SFmode ((void) 0, E_V20SFmode)
#endif
  E_V10DFmode,             /* config/riscv/riscv-modes.def:55 */
#define HAVE_V10DFmode
#ifdef USE_ENUM_MODES
#define V10DFmode E_V10DFmode
#else
#define V10DFmode ((void) 0, E_V10DFmode)
#endif
  E_V5TFmode,              /* config/riscv/riscv-modes.def:55 */
#define HAVE_V5TFmode
#ifdef USE_ENUM_MODES
#define V5TFmode E_V5TFmode
#else
#define V5TFmode ((void) 0, E_V5TFmode)
#endif
  E_V48HFmode,             /* config/riscv/riscv-modes.def:56 */
#define HAVE_V48HFmode
#ifdef USE_ENUM_MODES
#define V48HFmode E_V48HFmode
#else
#define V48HFmode ((void) 0, E_V48HFmode)
#endif
  E_V24SFmode,             /* config/riscv/riscv-modes.def:56 */
#define HAVE_V24SFmode
#ifdef USE_ENUM_MODES
#define V24SFmode E_V24SFmode
#else
#define V24SFmode ((void) 0, E_V24SFmode)
#endif
  E_V12DFmode,             /* config/riscv/riscv-modes.def:56 */
#define HAVE_V12DFmode
#ifdef USE_ENUM_MODES
#define V12DFmode E_V12DFmode
#else
#define V12DFmode ((void) 0, E_V12DFmode)
#endif
  E_V6TFmode,              /* config/riscv/riscv-modes.def:56 */
#define HAVE_V6TFmode
#ifdef USE_ENUM_MODES
#define V6TFmode E_V6TFmode
#else
#define V6TFmode ((void) 0, E_V6TFmode)
#endif
  E_V56HFmode,             /* config/riscv/riscv-modes.def:57 */
#define HAVE_V56HFmode
#ifdef USE_ENUM_MODES
#define V56HFmode E_V56HFmode
#else
#define V56HFmode ((void) 0, E_V56HFmode)
#endif
  E_V28SFmode,             /* config/riscv/riscv-modes.def:57 */
#define HAVE_V28SFmode
#ifdef USE_ENUM_MODES
#define V28SFmode E_V28SFmode
#else
#define V28SFmode ((void) 0, E_V28SFmode)
#endif
  E_V14DFmode,             /* config/riscv/riscv-modes.def:57 */
#define HAVE_V14DFmode
#ifdef USE_ENUM_MODES
#define V14DFmode E_V14DFmode
#else
#define V14DFmode ((void) 0, E_V14DFmode)
#endif
  E_V7TFmode,              /* config/riscv/riscv-modes.def:57 */
#define HAVE_V7TFmode
#ifdef USE_ENUM_MODES
#define V7TFmode E_V7TFmode
#else
#define V7TFmode ((void) 0, E_V7TFmode)
#endif
  E_V64HFmode,             /* config/riscv/riscv-modes.def:36 */
#define HAVE_V64HFmode
#ifdef USE_ENUM_MODES
#define V64HFmode E_V64HFmode
#else
#define V64HFmode ((void) 0, E_V64HFmode)
#endif
  E_V32SFmode,             /* config/riscv/riscv-modes.def:36 */
#define HAVE_V32SFmode
#ifdef USE_ENUM_MODES
#define V32SFmode E_V32SFmode
#else
#define V32SFmode ((void) 0, E_V32SFmode)
#endif
  E_V16DFmode,             /* config/riscv/riscv-modes.def:36 */
#define HAVE_V16DFmode
#ifdef USE_ENUM_MODES
#define V16DFmode E_V16DFmode
#else
#define V16DFmode ((void) 0, E_V16DFmode)
#endif
  E_V8TFmode,              /* config/riscv/riscv-modes.def:36 */
#define HAVE_V8TFmode
#ifdef USE_ENUM_MODES
#define V8TFmode E_V8TFmode
#else
#define V8TFmode ((void) 0, E_V8TFmode)
#endif
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = E_VOIDmode,
  MAX_MODE_RANDOM = E_BLKmode,

  MIN_MODE_CC = E_CCmode,
  MAX_MODE_CC = E_CCmode,

  MIN_MODE_INT = E_QImode,
  MAX_MODE_INT = E_ZI8mode,

  MIN_MODE_PARTIAL_INT = E_VOIDmode,
  MAX_MODE_PARTIAL_INT = E_VOIDmode,

  MIN_MODE_POINTER_BOUNDS = E_VOIDmode,
  MAX_MODE_POINTER_BOUNDS = E_VOIDmode,

  MIN_MODE_FRACT = E_QQmode,
  MAX_MODE_FRACT = E_TQmode,

  MIN_MODE_UFRACT = E_UQQmode,
  MAX_MODE_UFRACT = E_UTQmode,

  MIN_MODE_ACCUM = E_HAmode,
  MAX_MODE_ACCUM = E_TAmode,

  MIN_MODE_UACCUM = E_UHAmode,
  MAX_MODE_UACCUM = E_UTAmode,

  MIN_MODE_FLOAT = E_HFmode,
  MAX_MODE_FLOAT = E_TFmode,

  MIN_MODE_DECIMAL_FLOAT = E_SDmode,
  MAX_MODE_DECIMAL_FLOAT = E_TDmode,

  MIN_MODE_COMPLEX_INT = E_CQImode,
  MAX_MODE_COMPLEX_INT = E_CZImode,

  MIN_MODE_COMPLEX_FLOAT = E_HCmode,
  MAX_MODE_COMPLEX_FLOAT = E_TCmode,

  MIN_MODE_VECTOR_BOOL = E_VOIDmode,
  MAX_MODE_VECTOR_BOOL = E_VOIDmode,

  MIN_MODE_VECTOR_INT = E_V8QImode,
  MAX_MODE_VECTOR_INT = E_V8TImode,

  MIN_MODE_VECTOR_FRACT = E_VOIDmode,
  MAX_MODE_VECTOR_FRACT = E_VOIDmode,

  MIN_MODE_VECTOR_UFRACT = E_VOIDmode,
  MAX_MODE_VECTOR_UFRACT = E_VOIDmode,

  MIN_MODE_VECTOR_ACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_ACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_UACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_UACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_FLOAT = E_V4HFmode,
  MAX_MODE_VECTOR_FLOAT = E_V8TFmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define CONST_MODE_NUNITS const
#define CONST_MODE_PRECISION const
#define CONST_MODE_SIZE const
#define CONST_MODE_UNIT_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (128*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (256*BITS_PER_UNIT)
#define NUM_INT_N_ENTS 1
#define NUM_POLY_INT_COEFFS 1

#endif /* insn-modes.h */
