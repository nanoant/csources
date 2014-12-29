/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY151314[31];
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef NimStringDesc* TY151316[248];
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_151323)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, whichkeyword_151346)(tident141017* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU8, whichkeyword_151353)(NimStringDesc* id);
N_NIMCALL(tident141017*, getident_141443)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_151359)(void);
N_NIMCALL(tident141017*, getident_141449)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_111856)(NimStringDesc* x);
NIM_CONST TY151314 cppnimsharedkeywords_151313 = {
0x10, 0x1B, 0xAA, 0x12, 0x00, 0x02, 0x40, 0x1C,
0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1140, "", 0);
STRING_LITERAL(TMP1141, "addr", 4);
STRING_LITERAL(TMP1142, "and", 3);
STRING_LITERAL(TMP1143, "as", 2);
STRING_LITERAL(TMP1144, "asm", 3);
STRING_LITERAL(TMP1145, "atomic", 6);
STRING_LITERAL(TMP1146, "bind", 4);
STRING_LITERAL(TMP1147, "block", 5);
STRING_LITERAL(TMP1148, "break", 5);
STRING_LITERAL(TMP1149, "case", 4);
STRING_LITERAL(TMP1150, "cast", 4);
STRING_LITERAL(TMP1151, "const", 5);
STRING_LITERAL(TMP1152, "continue", 8);
STRING_LITERAL(TMP1153, "converter", 9);
STRING_LITERAL(TMP1154, "discard", 7);
STRING_LITERAL(TMP1155, "distinct", 8);
STRING_LITERAL(TMP1156, "div", 3);
STRING_LITERAL(TMP1157, "do", 2);
STRING_LITERAL(TMP1158, "elif", 4);
STRING_LITERAL(TMP1159, "else", 4);
STRING_LITERAL(TMP1160, "end", 3);
STRING_LITERAL(TMP1161, "enum", 4);
STRING_LITERAL(TMP1162, "except", 6);
STRING_LITERAL(TMP1163, "export", 6);
STRING_LITERAL(TMP1164, "finally", 7);
STRING_LITERAL(TMP1165, "for", 3);
STRING_LITERAL(TMP1166, "from", 4);
STRING_LITERAL(TMP1167, "generic", 7);
STRING_LITERAL(TMP1168, "if", 2);
STRING_LITERAL(TMP1169, "import", 6);
STRING_LITERAL(TMP1170, "in", 2);
STRING_LITERAL(TMP1171, "include", 7);
STRING_LITERAL(TMP1172, "interface", 9);
STRING_LITERAL(TMP1173, "is", 2);
STRING_LITERAL(TMP1174, "isnot", 5);
STRING_LITERAL(TMP1175, "iterator", 8);
STRING_LITERAL(TMP1176, "lambda", 6);
STRING_LITERAL(TMP1177, "let", 3);
STRING_LITERAL(TMP1178, "macro", 5);
STRING_LITERAL(TMP1179, "method", 6);
STRING_LITERAL(TMP1180, "mixin", 5);
STRING_LITERAL(TMP1181, "using", 5);
STRING_LITERAL(TMP1182, "mod", 3);
STRING_LITERAL(TMP1183, "nil", 3);
STRING_LITERAL(TMP1184, "not", 3);
STRING_LITERAL(TMP1185, "notin", 5);
STRING_LITERAL(TMP1186, "object", 6);
STRING_LITERAL(TMP1187, "of", 2);
STRING_LITERAL(TMP1188, "or", 2);
STRING_LITERAL(TMP1189, "out", 3);
STRING_LITERAL(TMP1190, "proc", 4);
STRING_LITERAL(TMP1191, "ptr", 3);
STRING_LITERAL(TMP1192, "raise", 5);
STRING_LITERAL(TMP1193, "ref", 3);
STRING_LITERAL(TMP1194, "return", 6);
STRING_LITERAL(TMP1195, "shared", 6);
STRING_LITERAL(TMP1196, "shl", 3);
STRING_LITERAL(TMP1197, "shr", 3);
STRING_LITERAL(TMP1198, "static", 6);
STRING_LITERAL(TMP1199, "template", 8);
STRING_LITERAL(TMP1200, "try", 3);
STRING_LITERAL(TMP1201, "tuple", 5);
STRING_LITERAL(TMP1202, "type", 4);
STRING_LITERAL(TMP1203, "var", 3);
STRING_LITERAL(TMP1204, "when", 4);
STRING_LITERAL(TMP1205, "while", 5);
STRING_LITERAL(TMP1206, "with", 4);
STRING_LITERAL(TMP1207, "without", 7);
STRING_LITERAL(TMP1208, "xor", 3);
STRING_LITERAL(TMP1209, "yield", 5);
STRING_LITERAL(TMP1210, ":", 1);
STRING_LITERAL(TMP1211, "::", 2);
STRING_LITERAL(TMP1212, "=", 1);
STRING_LITERAL(TMP1213, ".", 1);
STRING_LITERAL(TMP1214, "..", 2);
STRING_LITERAL(TMP1215, "*", 1);
STRING_LITERAL(TMP1216, "-", 1);
STRING_LITERAL(TMP1217, "magic", 5);
STRING_LITERAL(TMP1218, "thread", 6);
STRING_LITERAL(TMP1219, "final", 5);
STRING_LITERAL(TMP1220, "profiler", 8);
STRING_LITERAL(TMP1221, "objchecks", 9);
STRING_LITERAL(TMP1222, "destroy", 7);
STRING_LITERAL(TMP1223, "immediate", 9);
STRING_LITERAL(TMP1224, "destructor", 10);
STRING_LITERAL(TMP1225, "delegator", 9);
STRING_LITERAL(TMP1226, "importcpp", 9);
STRING_LITERAL(TMP1227, "importobjc", 10);
STRING_LITERAL(TMP1228, "importcompilerproc", 18);
STRING_LITERAL(TMP1229, "importc", 7);
STRING_LITERAL(TMP1230, "exportc", 7);
STRING_LITERAL(TMP1231, "incompletestruct", 16);
STRING_LITERAL(TMP1232, "requiresinit", 12);
STRING_LITERAL(TMP1233, "align", 5);
STRING_LITERAL(TMP1234, "nodecl", 6);
STRING_LITERAL(TMP1235, "pure", 4);
STRING_LITERAL(TMP1236, "sideeffect", 10);
STRING_LITERAL(TMP1237, "header", 6);
STRING_LITERAL(TMP1238, "nosideeffect", 12);
STRING_LITERAL(TMP1239, "noreturn", 8);
STRING_LITERAL(TMP1240, "merge", 5);
STRING_LITERAL(TMP1241, "lib", 3);
STRING_LITERAL(TMP1242, "dynlib", 6);
STRING_LITERAL(TMP1243, "compilerproc", 12);
STRING_LITERAL(TMP1244, "procvar", 7);
STRING_LITERAL(TMP1245, "fatal", 5);
STRING_LITERAL(TMP1246, "error", 5);
STRING_LITERAL(TMP1247, "warning", 7);
STRING_LITERAL(TMP1248, "hint", 4);
STRING_LITERAL(TMP1249, "line", 4);
STRING_LITERAL(TMP1250, "push", 4);
STRING_LITERAL(TMP1251, "pop", 3);
STRING_LITERAL(TMP1252, "define", 6);
STRING_LITERAL(TMP1253, "undef", 5);
STRING_LITERAL(TMP1254, "linedir", 7);
STRING_LITERAL(TMP1255, "stacktrace", 10);
STRING_LITERAL(TMP1256, "linetrace", 9);
STRING_LITERAL(TMP1257, "link", 4);
STRING_LITERAL(TMP1258, "compile", 7);
STRING_LITERAL(TMP1259, "linksys", 7);
STRING_LITERAL(TMP1260, "deprecated", 10);
STRING_LITERAL(TMP1261, "varargs", 7);
STRING_LITERAL(TMP1262, "callconv", 8);
STRING_LITERAL(TMP1263, "breakpoint", 10);
STRING_LITERAL(TMP1264, "debugger", 8);
STRING_LITERAL(TMP1265, "nimcall", 7);
STRING_LITERAL(TMP1266, "stdcall", 7);
STRING_LITERAL(TMP1267, "cdecl", 5);
STRING_LITERAL(TMP1268, "safecall", 8);
STRING_LITERAL(TMP1269, "syscall", 7);
STRING_LITERAL(TMP1270, "inline", 6);
STRING_LITERAL(TMP1271, "noinline", 8);
STRING_LITERAL(TMP1272, "fastcall", 8);
STRING_LITERAL(TMP1273, "closure", 7);
STRING_LITERAL(TMP1274, "noconv", 6);
STRING_LITERAL(TMP1275, "on", 2);
STRING_LITERAL(TMP1276, "off", 3);
STRING_LITERAL(TMP1277, "checks", 6);
STRING_LITERAL(TMP1278, "rangechecks", 11);
STRING_LITERAL(TMP1279, "boundchecks", 11);
STRING_LITERAL(TMP1280, "overflowchecks", 14);
STRING_LITERAL(TMP1281, "nilchecks", 9);
STRING_LITERAL(TMP1282, "floatchecks", 11);
STRING_LITERAL(TMP1283, "nanchecks", 9);
STRING_LITERAL(TMP1284, "infchecks", 9);
STRING_LITERAL(TMP1285, "assertions", 10);
STRING_LITERAL(TMP1286, "patterns", 8);
STRING_LITERAL(TMP1287, "warnings", 8);
STRING_LITERAL(TMP1288, "hints", 5);
STRING_LITERAL(TMP1289, "optimization", 12);
STRING_LITERAL(TMP1290, "raises", 6);
STRING_LITERAL(TMP1291, "writes", 6);
STRING_LITERAL(TMP1292, "reads", 5);
STRING_LITERAL(TMP1293, "size", 4);
STRING_LITERAL(TMP1294, "effects", 7);
STRING_LITERAL(TMP1295, "tags", 4);
STRING_LITERAL(TMP1296, "deadcodeelim", 12);
STRING_LITERAL(TMP1297, "safecode", 8);
STRING_LITERAL(TMP1298, "noforward", 9);
STRING_LITERAL(TMP1299, "pragma", 6);
STRING_LITERAL(TMP1300, "compiletime", 11);
STRING_LITERAL(TMP1301, "noinit", 6);
STRING_LITERAL(TMP1302, "passc", 5);
STRING_LITERAL(TMP1303, "passl", 5);
STRING_LITERAL(TMP1304, "borrow", 6);
STRING_LITERAL(TMP1305, "discardable", 11);
STRING_LITERAL(TMP1306, "fieldchecks", 11);
STRING_LITERAL(TMP1307, "watchpoint", 10);
STRING_LITERAL(TMP1308, "subschar", 8);
STRING_LITERAL(TMP1309, "acyclic", 7);
STRING_LITERAL(TMP1310, "shallow", 7);
STRING_LITERAL(TMP1311, "unroll", 6);
STRING_LITERAL(TMP1312, "linearscanend", 13);
STRING_LITERAL(TMP1313, "computedgoto", 12);
STRING_LITERAL(TMP1314, "injectstmt", 10);
STRING_LITERAL(TMP1315, "write", 5);
STRING_LITERAL(TMP1316, "gensym", 6);
STRING_LITERAL(TMP1317, "inject", 6);
STRING_LITERAL(TMP1318, "dirty", 5);
STRING_LITERAL(TMP1319, "inheritable", 11);
STRING_LITERAL(TMP1320, "threadvar", 9);
STRING_LITERAL(TMP1321, "emit", 4);
STRING_LITERAL(TMP1322, "nostackframe", 12);
STRING_LITERAL(TMP1323, "implicitstatic", 14);
STRING_LITERAL(TMP1324, "global", 6);
STRING_LITERAL(TMP1325, "codegendecl", 11);
STRING_LITERAL(TMP1326, "auto", 4);
STRING_LITERAL(TMP1327, "bool", 4);
STRING_LITERAL(TMP1328, "catch", 5);
STRING_LITERAL(TMP1329, "char", 4);
STRING_LITERAL(TMP1330, "class", 5);
STRING_LITERAL(TMP1331, "const_cast", 10);
STRING_LITERAL(TMP1332, "default", 7);
STRING_LITERAL(TMP1333, "delete", 6);
STRING_LITERAL(TMP1334, "double", 6);
STRING_LITERAL(TMP1335, "dynamic_cast", 12);
STRING_LITERAL(TMP1336, "explicit", 8);
STRING_LITERAL(TMP1337, "extern", 6);
STRING_LITERAL(TMP1338, "false", 5);
STRING_LITERAL(TMP1339, "float", 5);
STRING_LITERAL(TMP1340, "friend", 6);
STRING_LITERAL(TMP1341, "goto", 4);
STRING_LITERAL(TMP1342, "int", 3);
STRING_LITERAL(TMP1343, "long", 4);
STRING_LITERAL(TMP1344, "mutable", 7);
STRING_LITERAL(TMP1345, "namespace", 9);
STRING_LITERAL(TMP1346, "new", 3);
STRING_LITERAL(TMP1347, "operator", 8);
STRING_LITERAL(TMP1348, "private", 7);
STRING_LITERAL(TMP1349, "protected", 9);
STRING_LITERAL(TMP1350, "public", 6);
STRING_LITERAL(TMP1351, "register", 8);
STRING_LITERAL(TMP1352, "reinterpret_cast", 16);
STRING_LITERAL(TMP1353, "short", 5);
STRING_LITERAL(TMP1354, "signed", 6);
STRING_LITERAL(TMP1355, "sizeof", 6);
STRING_LITERAL(TMP1356, "static_cast", 11);
STRING_LITERAL(TMP1357, "struct", 6);
STRING_LITERAL(TMP1358, "switch", 6);
STRING_LITERAL(TMP1359, "this", 4);
STRING_LITERAL(TMP1360, "throw", 5);
STRING_LITERAL(TMP1361, "true", 4);
STRING_LITERAL(TMP1362, "typedef", 7);
STRING_LITERAL(TMP1363, "typeid", 6);
STRING_LITERAL(TMP1364, "typename", 8);
STRING_LITERAL(TMP1365, "union", 5);
STRING_LITERAL(TMP1366, "unsigned", 8);
STRING_LITERAL(TMP1367, "virtual", 7);
STRING_LITERAL(TMP1368, "void", 4);
STRING_LITERAL(TMP1369, "volatile", 8);
STRING_LITERAL(TMP1370, "wchar_t", 7);
STRING_LITERAL(TMP1371, "alignas", 7);
STRING_LITERAL(TMP1372, "alignof", 7);
STRING_LITERAL(TMP1373, "constexpr", 9);
STRING_LITERAL(TMP1374, "decltype", 8);
STRING_LITERAL(TMP1375, "nullptr", 7);
STRING_LITERAL(TMP1376, "noexcept", 8);
STRING_LITERAL(TMP1377, "thread_local", 12);
STRING_LITERAL(TMP1378, "static_assert", 13);
STRING_LITERAL(TMP1379, "char16_t", 8);
STRING_LITERAL(TMP1380, "char32_t", 8);
STRING_LITERAL(TMP1381, "stdin", 5);
STRING_LITERAL(TMP1382, "stdout", 6);
STRING_LITERAL(TMP1383, "stderr", 6);
STRING_LITERAL(TMP1384, "inout", 5);
STRING_LITERAL(TMP1385, "bycopy", 6);
STRING_LITERAL(TMP1386, "byref", 5);
STRING_LITERAL(TMP1387, "oneway", 6);
NIM_CONST TY151316 specialwords_151315 = {((NimStringDesc*) &TMP1140),
((NimStringDesc*) &TMP1141),
((NimStringDesc*) &TMP1142),
((NimStringDesc*) &TMP1143),
((NimStringDesc*) &TMP1144),
((NimStringDesc*) &TMP1145),
((NimStringDesc*) &TMP1146),
((NimStringDesc*) &TMP1147),
((NimStringDesc*) &TMP1148),
((NimStringDesc*) &TMP1149),
((NimStringDesc*) &TMP1150),
((NimStringDesc*) &TMP1151),
((NimStringDesc*) &TMP1152),
((NimStringDesc*) &TMP1153),
((NimStringDesc*) &TMP1154),
((NimStringDesc*) &TMP1155),
((NimStringDesc*) &TMP1156),
((NimStringDesc*) &TMP1157),
((NimStringDesc*) &TMP1158),
((NimStringDesc*) &TMP1159),
((NimStringDesc*) &TMP1160),
((NimStringDesc*) &TMP1161),
((NimStringDesc*) &TMP1162),
((NimStringDesc*) &TMP1163),
((NimStringDesc*) &TMP1164),
((NimStringDesc*) &TMP1165),
((NimStringDesc*) &TMP1166),
((NimStringDesc*) &TMP1167),
((NimStringDesc*) &TMP1168),
((NimStringDesc*) &TMP1169),
((NimStringDesc*) &TMP1170),
((NimStringDesc*) &TMP1171),
((NimStringDesc*) &TMP1172),
((NimStringDesc*) &TMP1173),
((NimStringDesc*) &TMP1174),
((NimStringDesc*) &TMP1175),
((NimStringDesc*) &TMP1176),
((NimStringDesc*) &TMP1177),
((NimStringDesc*) &TMP1178),
((NimStringDesc*) &TMP1179),
((NimStringDesc*) &TMP1180),
((NimStringDesc*) &TMP1181),
((NimStringDesc*) &TMP1182),
((NimStringDesc*) &TMP1183),
((NimStringDesc*) &TMP1184),
((NimStringDesc*) &TMP1185),
((NimStringDesc*) &TMP1186),
((NimStringDesc*) &TMP1187),
((NimStringDesc*) &TMP1188),
((NimStringDesc*) &TMP1189),
((NimStringDesc*) &TMP1190),
((NimStringDesc*) &TMP1191),
((NimStringDesc*) &TMP1192),
((NimStringDesc*) &TMP1193),
((NimStringDesc*) &TMP1194),
((NimStringDesc*) &TMP1195),
((NimStringDesc*) &TMP1196),
((NimStringDesc*) &TMP1197),
((NimStringDesc*) &TMP1198),
((NimStringDesc*) &TMP1199),
((NimStringDesc*) &TMP1200),
((NimStringDesc*) &TMP1201),
((NimStringDesc*) &TMP1202),
((NimStringDesc*) &TMP1203),
((NimStringDesc*) &TMP1204),
((NimStringDesc*) &TMP1205),
((NimStringDesc*) &TMP1206),
((NimStringDesc*) &TMP1207),
((NimStringDesc*) &TMP1208),
((NimStringDesc*) &TMP1209),
((NimStringDesc*) &TMP1210),
((NimStringDesc*) &TMP1211),
((NimStringDesc*) &TMP1212),
((NimStringDesc*) &TMP1213),
((NimStringDesc*) &TMP1214),
((NimStringDesc*) &TMP1215),
((NimStringDesc*) &TMP1216),
((NimStringDesc*) &TMP1217),
((NimStringDesc*) &TMP1218),
((NimStringDesc*) &TMP1219),
((NimStringDesc*) &TMP1220),
((NimStringDesc*) &TMP1221),
((NimStringDesc*) &TMP1222),
((NimStringDesc*) &TMP1223),
((NimStringDesc*) &TMP1224),
((NimStringDesc*) &TMP1225),
((NimStringDesc*) &TMP1226),
((NimStringDesc*) &TMP1227),
((NimStringDesc*) &TMP1228),
((NimStringDesc*) &TMP1229),
((NimStringDesc*) &TMP1230),
((NimStringDesc*) &TMP1231),
((NimStringDesc*) &TMP1232),
((NimStringDesc*) &TMP1233),
((NimStringDesc*) &TMP1234),
((NimStringDesc*) &TMP1235),
((NimStringDesc*) &TMP1236),
((NimStringDesc*) &TMP1237),
((NimStringDesc*) &TMP1238),
((NimStringDesc*) &TMP1239),
((NimStringDesc*) &TMP1240),
((NimStringDesc*) &TMP1241),
((NimStringDesc*) &TMP1242),
((NimStringDesc*) &TMP1243),
((NimStringDesc*) &TMP1244),
((NimStringDesc*) &TMP1245),
((NimStringDesc*) &TMP1246),
((NimStringDesc*) &TMP1247),
((NimStringDesc*) &TMP1248),
((NimStringDesc*) &TMP1249),
((NimStringDesc*) &TMP1250),
((NimStringDesc*) &TMP1251),
((NimStringDesc*) &TMP1252),
((NimStringDesc*) &TMP1253),
((NimStringDesc*) &TMP1254),
((NimStringDesc*) &TMP1255),
((NimStringDesc*) &TMP1256),
((NimStringDesc*) &TMP1257),
((NimStringDesc*) &TMP1258),
((NimStringDesc*) &TMP1259),
((NimStringDesc*) &TMP1260),
((NimStringDesc*) &TMP1261),
((NimStringDesc*) &TMP1262),
((NimStringDesc*) &TMP1263),
((NimStringDesc*) &TMP1264),
((NimStringDesc*) &TMP1265),
((NimStringDesc*) &TMP1266),
((NimStringDesc*) &TMP1267),
((NimStringDesc*) &TMP1268),
((NimStringDesc*) &TMP1269),
((NimStringDesc*) &TMP1270),
((NimStringDesc*) &TMP1271),
((NimStringDesc*) &TMP1272),
((NimStringDesc*) &TMP1273),
((NimStringDesc*) &TMP1274),
((NimStringDesc*) &TMP1275),
((NimStringDesc*) &TMP1276),
((NimStringDesc*) &TMP1277),
((NimStringDesc*) &TMP1278),
((NimStringDesc*) &TMP1279),
((NimStringDesc*) &TMP1280),
((NimStringDesc*) &TMP1281),
((NimStringDesc*) &TMP1282),
((NimStringDesc*) &TMP1283),
((NimStringDesc*) &TMP1284),
((NimStringDesc*) &TMP1285),
((NimStringDesc*) &TMP1286),
((NimStringDesc*) &TMP1287),
((NimStringDesc*) &TMP1288),
((NimStringDesc*) &TMP1289),
((NimStringDesc*) &TMP1290),
((NimStringDesc*) &TMP1291),
((NimStringDesc*) &TMP1292),
((NimStringDesc*) &TMP1293),
((NimStringDesc*) &TMP1294),
((NimStringDesc*) &TMP1295),
((NimStringDesc*) &TMP1296),
((NimStringDesc*) &TMP1297),
((NimStringDesc*) &TMP1298),
((NimStringDesc*) &TMP1299),
((NimStringDesc*) &TMP1300),
((NimStringDesc*) &TMP1301),
((NimStringDesc*) &TMP1302),
((NimStringDesc*) &TMP1303),
((NimStringDesc*) &TMP1304),
((NimStringDesc*) &TMP1305),
((NimStringDesc*) &TMP1306),
((NimStringDesc*) &TMP1307),
((NimStringDesc*) &TMP1308),
((NimStringDesc*) &TMP1309),
((NimStringDesc*) &TMP1310),
((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312),
((NimStringDesc*) &TMP1313),
((NimStringDesc*) &TMP1314),
((NimStringDesc*) &TMP1315),
((NimStringDesc*) &TMP1316),
((NimStringDesc*) &TMP1317),
((NimStringDesc*) &TMP1318),
((NimStringDesc*) &TMP1319),
((NimStringDesc*) &TMP1320),
((NimStringDesc*) &TMP1321),
((NimStringDesc*) &TMP1322),
((NimStringDesc*) &TMP1323),
((NimStringDesc*) &TMP1324),
((NimStringDesc*) &TMP1325),
((NimStringDesc*) &TMP1326),
((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328),
((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330),
((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332),
((NimStringDesc*) &TMP1333),
((NimStringDesc*) &TMP1334),
((NimStringDesc*) &TMP1335),
((NimStringDesc*) &TMP1336),
((NimStringDesc*) &TMP1337),
((NimStringDesc*) &TMP1338),
((NimStringDesc*) &TMP1339),
((NimStringDesc*) &TMP1340),
((NimStringDesc*) &TMP1341),
((NimStringDesc*) &TMP1342),
((NimStringDesc*) &TMP1343),
((NimStringDesc*) &TMP1344),
((NimStringDesc*) &TMP1345),
((NimStringDesc*) &TMP1346),
((NimStringDesc*) &TMP1347),
((NimStringDesc*) &TMP1348),
((NimStringDesc*) &TMP1349),
((NimStringDesc*) &TMP1350),
((NimStringDesc*) &TMP1351),
((NimStringDesc*) &TMP1352),
((NimStringDesc*) &TMP1353),
((NimStringDesc*) &TMP1354),
((NimStringDesc*) &TMP1355),
((NimStringDesc*) &TMP1356),
((NimStringDesc*) &TMP1357),
((NimStringDesc*) &TMP1358),
((NimStringDesc*) &TMP1359),
((NimStringDesc*) &TMP1360),
((NimStringDesc*) &TMP1361),
((NimStringDesc*) &TMP1362),
((NimStringDesc*) &TMP1363),
((NimStringDesc*) &TMP1364),
((NimStringDesc*) &TMP1365),
((NimStringDesc*) &TMP1366),
((NimStringDesc*) &TMP1367),
((NimStringDesc*) &TMP1368),
((NimStringDesc*) &TMP1369),
((NimStringDesc*) &TMP1370),
((NimStringDesc*) &TMP1371),
((NimStringDesc*) &TMP1372),
((NimStringDesc*) &TMP1373),
((NimStringDesc*) &TMP1374),
((NimStringDesc*) &TMP1375),
((NimStringDesc*) &TMP1376),
((NimStringDesc*) &TMP1377),
((NimStringDesc*) &TMP1378),
((NimStringDesc*) &TMP1379),
((NimStringDesc*) &TMP1380),
((NimStringDesc*) &TMP1381),
((NimStringDesc*) &TMP1382),
((NimStringDesc*) &TMP1383),
((NimStringDesc*) &TMP1384),
((NimStringDesc*) &TMP1385),
((NimStringDesc*) &TMP1386),
((NimStringDesc*) &TMP1387)}
;
extern TFrame* frameptr_12037;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(NI, findstr_151323)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	NI i_151338;
	NI HEX3Atmp_151339;
	NI res_151341;
	nimfr("findStr", "wordrecg.nim")
	result = 0;
	i_151338 = 0;
	HEX3Atmp_151339 = 0;
	nimln(170, "wordrecg.nim");
	nimln(170, "wordrecg.nim");
	HEX3Atmp_151339 = (aLen0-1);
	nimln(1301, "system.nim");
	res_151341 = 0;
	nimln(1302, "system.nim");
	while (1) {
		nimln(1302, "system.nim");
		if (!(res_151341 <= HEX3Atmp_151339)) goto LA1;
		nimln(1301, "system.nim");
		i_151338 = res_151341;
		nimln(171, "wordrecg.nim");
		{
			NI LOC4;
			nimln(171, "wordrecg.nim");
			nimln(171, "wordrecg.nim");
			if ((NU)(i_151338) >= (NU)(aLen0)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(a[i_151338], s);
			if (!(LOC4 == 0)) goto LA5;
			nimln(172, "wordrecg.nim");
			nimln(172, "wordrecg.nim");
			result = i_151338;
			goto BeforeRet;
		}		LA5: ;
		nimln(1304, "system.nim");
		res_151341 = addInt(res_151341, 1);
	} LA1: ;
	nimln(173, "wordrecg.nim");
	result = -1;
	BeforeRet: ;	popFrame();
	return result;
}
static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));	}	LA1: ;
	BeforeRet: ;	return result;
}
N_NIMCALL(NU8, whichkeyword_151346)(tident141017* id) {
	NU8 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(176, "wordrecg.nim");
	{
		nimln(176, "wordrecg.nim");
		if (!((*id).Sup.Id < 0)) goto LA3;
		nimln(176, "wordrecg.nim");
		result = ((NU8) 0);
	}	goto LA1;
	LA3: ;
	{
		nimln(177, "wordrecg.nim");
		result = ((NU8)chckRange((*id).Sup.Id, ((NU8) 0), ((NU8) 247)));
	}	LA1: ;
	popFrame();
	return result;
}
N_NIMCALL(NU8, whichkeyword_151353)(NimStringDesc* id) {
	NU8 result;
	tident141017* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(180, "wordrecg.nim");
	nimln(180, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_141443(id);
	result = whichkeyword_151346(LOC1);
	popFrame();
	return result;
}
N_NIMCALL(void, initspecials_151359)(void) {
	NU8 s_151401;
	NU8 res_151410;
	nimfr("initSpecials", "wordrecg.nim")
	s_151401 = 0;
	nimln(1301, "system.nim");
	res_151410 = ((NU8) 1);
	nimln(1302, "system.nim");
	while (1) {
		NI LOC2;
		tident141017* LOC3;
		nimln(1302, "system.nim");
		if (!(res_151410 <= ((NU8) 247))) goto LA1;
		nimln(1301, "system.nim");
		s_151401 = res_151410;
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		nimln(185, "wordrecg.nim");
		LOC2 = 0;
		LOC2 = hashignorestyle_111856(specialwords_151315[(s_151401)- 0]);
		LOC3 = 0;
		LOC3 = getident_141449(specialwords_151315[(s_151401)- 0], LOC2);
		nimln(185, "wordrecg.nim");
		(*LOC3).Sup.Id = ((NI) (s_151401));
		nimln(1304, "system.nim");
		res_151410 = addInt(res_151410, 1);
	} LA1: ;
	popFrame();
}N_NOINLINE(void, compilerwordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(187, "wordrecg.nim");
	initspecials_151359();	popFrame();
}

N_NOINLINE(void, compilerwordrecgDatInit)(void) {
}

