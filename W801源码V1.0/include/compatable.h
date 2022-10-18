#ifndef _COMPATABLE_H_
#define _COMPATABLE_H_

#include "stdint.h"

#define compatable_max  61669
#define compatable_min  17847
#define compatable_num  3002

const uint16_t compatable[] = 
{
    61669, 61642, 61615, 61588, 61561, 61534, 61507, 61480, 61453, 61426, 61399, 61372, 61345, 61318, 61291, 61265, 61238, 61211, 61184, 61157, 61130, 61104, 61077, 61050, 61023, 60997, 60970, 60943, 60916, 60890, 60863, 60836, 60810, 60783, 60757, 60730, 60703, 60677, 60650, 60624, 60597, 60571, 60544, 60517, 60491, 60465, 60438, 60412, 60385, 60359, 60332, 60306, 60279, 60253, 60227, 60200, 60174, 60148, 60121, 60095, 60069, 60043, 60016, 59990, 59964, 59938, 59911, 59885, 59859, 59833, 59807, 59780, 59754, 59728, 59702, 59676, 59650, 59624, 59598, 59572, 59546, 59520, 59494, 59468, 59442, 59416, 59390, 59364, 59338, 59312, 59286, 59260, 59234, 59208, 59182, 59156, 59131, 59105, 59079, 59053, 59027, 59002, 58976, 58950, 58924, 58899, 58873, 58847, 58821, 58796, 58770, 58744, 58719, 58693, 58668, 58642, 58616, 58591, 58565, 58540, 58514, 58489, 58463, 58438, 58412, 58387, 58361, 58336, 58310, 58285, 58259, 58234, 58208, 58183, 58158, 58132, 58107, 58082, 58056, 58031, 58006, 57980, 57955, 57930, 57905, 57879, 57854, 57829, 57804, 57778, 57753, 57728, 57703, 57678, 57653, 57628, 57602, 57577, 57552, 57527, 57502, 57477, 57452, 57427, 57402, 57377, 57352, 57327, 57302, 57277, 57252, 57227, 57202, 57177, 57152, 57128, 57103, 57078, 57053, 57028, 57003, 56978, 56954, 56929, 56904, 56879, 56855, 56830, 56805, 56780, 56756, 56731, 56706, 56682, 56657, 56632, 56608, 56583, 56558, 56534, 56509, 56485, 56460, 56435, 56411, 56386, 56362, 56337, 56313, 56288, 56264, 56239, 56215, 56191, 56166, 56142, 56117, 56093, 56069, 56044, 56020, 55995, 55971, 55947, 55922, 55898, 55874, 55850, 55825, 55801, 55777, 55753, 55728, 55704, 55680, 55656, 55632, 55607, 55583, 55559, 55535, 55511, 55487, 55463, 55439, 55415, 55391, 55366, 55342, 55318, 55294, 55270, 55246, 55222, 55198, 55174, 55151, 55127, 55103, 55079, 55055, 55031, 55007, 54983, 54959, 54936, 54912, 54888, 54864, 54840, 54816, 54793, 54769, 54745, 54721, 54698, 54674, 54650, 54627, 54603, 54579, 54556, 54532, 54508, 54485, 54461, 54437, 54414, 54390, 54367, 54343, 54320, 54296, 54272, 54249, 54225, 54202, 54178, 54155, 54132, 54108, 54085, 54061, 54038, 54014, 53991, 53968, 53944, 53921, 53898, 53874, 53851, 53828, 53804, 53781, 53758, 53734, 53711, 53688, 53665, 53641, 53618, 53595, 53572, 53549, 53525, 53502, 53479, 53456, 53433, 53410, 53387, 53364, 53340, 53317, 53294, 53271, 53248, 53225, 53202, 53179, 53156, 53133, 53110, 53087, 53064, 53041, 53018, 52995, 52973, 52950, 52927, 52904, 52881, 52858, 52835, 52812, 52790, 52767, 52744, 52721, 52698, 52676, 52653, 52630, 52607, 52585, 52562, 52539, 52517, 52494, 52471, 52449, 52426, 52403, 52381, 52358, 52335, 52313, 52290, 52268, 52245, 52222, 52200, 52177, 52155, 52132, 52110, 52087, 52065, 52042, 52020, 51997, 51975, 51953, 51930, 51908, 51885, 51863, 51841, 51818, 51796, 51774, 51751, 51729, 51707, 51684, 51662, 51640, 51617, 51595, 51573, 51551, 51528, 51506, 51484, 51462, 51440, 51417, 51395, 51373, 51351, 51329, 51307, 51285, 51262, 51240, 51218, 51196, 51174, 51152, 51130, 51108, 51086, 51064, 51042, 51020, 50998, 50976, 50954, 50932, 50910, 50888, 50866, 50844, 50823, 50801, 50779, 50757, 50735, 50713, 50691, 50670, 50648, 50626, 50604, 50582, 50561, 50539, 50517, 50495, 50474, 50452, 50430, 50408, 50387, 50365, 50343, 50322, 50300, 50278, 50257, 50235, 50214, 50192, 50170, 50149, 50127, 50106, 50084, 50063, 50041, 50020, 49998, 49977, 49955, 49934, 49912, 49891, 49869, 49848, 49826, 49805, 49784, 49762, 49741, 49719, 49698, 49677, 49655, 49634, 49613, 49591, 49570, 49549, 49527, 49506, 49485, 49464, 49442, 49421, 49400, 49379, 49358, 49336, 49315, 49294, 49273, 49252, 49231, 49209, 49188, 49167, 49146, 49125, 49104, 49083, 49062, 49041, 49020, 48999, 48978, 48956, 48935, 48914, 48893, 48873, 48852, 48831, 48810, 48789, 48768, 48747, 48726, 48705, 48684, 48663, 48642, 48622, 48601, 48580, 48559, 48538, 48517, 48497, 48476, 48455, 48434, 48413, 48393, 48372, 48351, 48331, 48310, 48289, 48268, 48248, 48227, 48206, 48186, 48165, 48144, 48124, 48103, 48083, 48062, 48041, 48021, 48000, 47980, 47959, 47939, 47918, 47898, 47877, 47857, 47836, 47816, 47795, 47775, 47754, 47734, 47713, 47693, 47672, 47652, 47632, 47611, 47591, 47571, 47550, 47530, 47509, 47489, 47469, 47449, 47428, 47408, 47388, 47367, 47347, 47327, 47307, 47286, 47266, 47246, 47226, 47206, 47185, 47165, 47145, 47125, 47105, 47085, 47064, 47044, 47024, 47004, 46984, 46964, 46944, 46924, 46904, 46884, 46864, 46844, 46824, 46804, 46784, 46764, 46744, 46724, 46704, 46684, 46664, 46644, 46624, 46604, 46584, 46564, 46544, 46524, 46505, 46485, 46465, 46445, 46425, 46405, 46386, 46366, 46346, 46326, 46306, 46287, 46267, 46247, 46227, 46208, 46188, 46168, 46149, 46129, 46109, 46089, 46070, 46050, 46031, 46011, 45991, 45972, 45952, 45932, 45913, 45893, 45874, 45854, 45835, 45815, 45795, 45776, 45756, 45737, 45717, 45698, 45678, 45659, 45640, 45620, 45601, 45581, 45562, 45542, 45523, 45504, 45484, 45465, 45445, 45426, 45407, 45387, 45368, 45349, 45329, 45310, 45291, 45271, 45252, 45233, 45214, 45194, 45175, 45156, 45137, 45117, 45098, 45079, 45060, 45041, 45021, 45002, 44983, 44964, 44945, 44926, 44907, 44887, 44868, 44849, 44830, 44811, 44792, 44773, 44754, 44735, 44716, 44697, 44678, 44659, 44640, 44621, 44602, 44583, 44564, 44545, 44526, 44507, 44488, 44469, 44450, 44431, 44413, 44394, 44375, 44356, 44337, 44318, 44299, 44281, 44262, 44243, 44224, 44205, 44187, 44168, 44149, 44130, 44111, 44093, 44074, 44055, 44037, 44018, 43999, 43980, 43962, 43943, 43924, 43906, 43887, 43868, 43850, 43831, 43813, 43794, 43775, 43757, 43738, 43720, 43701, 43683, 43664, 43645, 43627, 43608, 43590, 43571, 43553, 43534, 43516, 43498, 43479, 43461, 43442, 43424, 43405, 43387, 43368, 43350, 43332, 43313, 43295, 43277, 43258, 43240, 43222, 43203, 43185, 43167, 43148, 43130, 43112, 43093, 43075, 43057, 43039, 43020, 43002, 42984, 42966, 42948, 42929, 42911, 42893, 42875, 42857, 42838, 42820, 42802, 42784, 42766, 42748, 42730, 42712, 42693, 42675, 42657, 42639, 42621, 42603, 42585, 42567, 42549, 42531, 42513, 42495, 42477, 42459, 42441, 42423, 42405, 42387, 42369, 42351, 42333, 42315, 42298, 42280, 42262, 42244, 42226, 42208, 42190, 42172, 42155, 42137, 42119, 42101, 42083, 42065, 42048, 42030, 42012, 41994, 41977, 41959, 41941, 41923, 41906, 41888, 41870, 41853, 41835, 41817, 41799, 41782, 41764, 41746, 41729, 41711, 41694, 41676, 41658, 41641, 41623, 41606, 41588, 41570, 41553, 41535, 41518, 41500, 41483, 41465, 41448, 41430, 41413, 41395, 41378, 41360, 41343, 41325, 41308, 41290, 41273, 41256, 41238, 41221, 41203, 41186, 41168, 41151, 41134, 41116, 41099, 41082, 41064, 41047, 41030, 41012, 40995, 40978, 40960, 40943, 40926, 40909, 40891, 40874, 40857, 40840, 40822, 40805, 40788, 40771, 40754, 40736, 40719, 40702, 40685, 40668, 40651, 40634, 40616, 40599, 40582, 40565, 40548, 40531, 40514, 40497, 40480, 40463, 40446, 40428, 40411, 40394, 40377, 40360, 40343, 40326, 40309, 40292, 40275, 40258, 40242, 40225, 40208, 40191, 40174, 40157, 40140, 40123, 40106, 40089, 40072, 40056, 40039, 40022, 40005, 39988, 39971, 39954, 39938, 39921, 39904, 39887, 39870, 39854, 39837, 39820, 39803, 39787, 39770, 39753, 39736, 39720, 39703, 39686, 39670, 39653, 39636, 39620, 39603, 39586, 39570, 39553, 39536, 39520, 39503, 39486, 39470, 39453, 39437, 39420, 39404, 39387, 39370, 39354, 39337, 39321, 39304, 39288, 39271, 39255, 39238, 39222, 39205, 39189, 39172, 39156, 39139, 39123, 39107, 39090, 39074, 39057, 39041, 39025, 39008, 38992, 38975, 38959, 38943, 38926, 38910, 38894, 38877, 38861, 38845, 38828, 38812, 38796, 38779, 38763, 38747, 38731, 38714, 38698, 38682, 38666, 38649, 38633, 38617, 38601, 38585, 38568, 38552, 38536, 38520, 38504, 38488, 38472, 38455, 38439, 38423, 38407, 38391, 38375, 38359, 38343, 38327, 38311, 38294, 38278, 38262, 38246, 38230, 38214, 38198, 38182, 38166, 38150, 38134, 38118, 38102, 38086, 38070, 38054, 38039, 38023, 38007, 37991, 37975, 37959, 37943, 37927, 37911, 37895, 37879, 37864, 37848, 37832, 37816, 37800, 37784, 37769, 37753, 37737, 37721, 37705, 37690, 37674, 37658, 37642, 37627, 37611, 37595, 37579, 37564, 37548, 37532, 37516, 37501, 37485, 37469, 37454, 37438, 37422, 37407, 37391, 37375, 37360, 37344, 37329, 37313, 37297, 37282, 37266, 37251, 37235, 37219, 37204, 37188, 37173, 37157, 37142, 37126, 37111, 37095, 37080, 37064, 37049, 37033, 37018, 37002, 36987, 36971, 36956, 36941, 36925, 36910, 36894, 36879, 36863, 36848, 36833, 36817, 36802, 36787, 36771, 36756, 36740, 36725, 36710, 36694, 36679, 36664, 36649, 36633, 36618, 36603, 36587, 36572, 36557, 36542, 36526, 36511, 36496, 36481, 36465, 36450, 36435, 36420, 36405, 36389, 36374, 36359, 36344, 36329, 36314, 36298, 36283, 36268, 36253, 36238, 36223, 36208, 36193, 36177, 36162, 36147, 36132, 36117, 36102, 36087, 36072, 36057, 36042, 36027, 36012, 35997, 35982, 35967, 35952, 35937, 35922, 35907, 35892, 35877, 35862, 35847, 35832, 35817, 35802, 35788, 35773, 35758, 35743, 35728, 35713, 35698, 35683, 35669, 35654, 35639, 35624, 35609, 35594, 35580, 35565, 35550, 35535, 35520, 35506, 35491, 35476, 35461, 35446, 35432, 35417, 35402, 35388, 35373, 35358, 35343, 35329, 35314, 35299, 35285, 35270, 35255, 35241, 35226, 35211, 35197, 35182, 35167, 35153, 35138, 35124, 35109, 35094, 35080, 35065, 35051, 35036, 35021, 35007, 34992, 34978, 34963, 34949, 34934, 34920, 34905, 34891, 34876, 34862, 34847, 34833, 34818, 34804, 34789, 34775, 34760, 34746, 34732, 34717, 34703, 34688, 34674, 34660, 34645, 34631, 34616, 34602, 34588, 34573, 34559, 34545, 34530, 34516, 34502, 34487, 34473, 34459, 34444, 34430, 34416, 34402, 34387, 34373, 34359, 34344, 34330, 34316, 34302, 34288, 34273, 34259, 34245, 34231, 34216, 34202, 34188, 34174, 34160, 34146, 34131, 34117, 34103, 34089, 34075, 34061, 34047, 34033, 34018, 34004, 33990, 33976, 33962, 33948, 33934, 33920, 33906, 33892, 33878, 33864, 33850, 33836, 33822, 33808, 33794, 33780, 33766, 33752, 33738, 33724, 33710, 33696, 33682, 33668, 33654, 33640, 33626, 33612, 33598, 33584, 33570, 33557, 33543, 33529, 33515, 33501, 33487, 33473, 33459, 33446, 33432, 33418, 33404, 33390, 33376, 33363, 33349, 33335, 33321, 33307, 33294, 33280, 33266, 33252, 33239, 33225, 33211, 33197, 33184, 33170, 33156, 33143, 33129, 33115, 33101, 33088, 33074, 33060, 33047, 33033, 33019, 33006, 32992, 32979, 32965, 32951, 32938, 32924, 32910, 32897, 32883, 32870, 32856, 32843, 32829, 32815, 32802, 32788, 32775, 32761, 32748, 32734, 32721, 32707, 32694, 32680, 32667, 32653, 32640, 32626, 32613, 32599, 32586, 32572, 32559, 32546, 32532, 32519, 32505, 32492, 32478, 32465, 32452, 32438, 32425, 32412, 32398, 32385, 32371, 32358, 32345, 32331, 32318, 32305, 32291, 32278, 32265, 32251, 32238, 32225, 32212, 32198, 32185, 32172, 32158, 32145, 32132, 32119, 32106, 32092, 32079, 32066, 32053, 32039, 32026, 32013, 32000, 31987, 31973, 31960, 31947, 31934, 31921, 31908, 31895, 31881, 31868, 31855, 31842, 31829, 31816, 31803, 31790, 31776, 31763, 31750, 31737, 31724, 31711, 31698, 31685, 31672, 31659, 31646, 31633, 31620, 31607, 31594, 31581, 31568, 31555, 31542, 31529, 31516, 31503, 31490, 31477, 31464, 31451, 31438, 31425, 31412, 31399, 31387, 31374, 31361, 31348, 31335, 31322, 31309, 31296, 31283, 31271, 31258, 31245, 31232, 31219, 31206, 31194, 31181, 31168, 31155, 31142, 31129, 31117, 31104, 31091, 31078, 31066, 31053, 31040, 31027, 31015, 31002, 30989, 30976, 30964, 30951, 30938, 30926, 30913, 30900, 30887, 30875, 30862, 30849, 30837, 30824, 30811, 30799, 30786, 30773, 30761, 30748, 30736, 30723, 30710, 30698, 30685, 30673, 30660, 30647, 30635, 30622, 30610, 30597, 30585, 30572, 30560, 30547, 30534, 30522, 30509, 30497, 30484, 30472, 30459, 30447, 30434, 30422, 30409, 30397, 30385, 30372, 30360, 30347, 30335, 30322, 30310, 30297, 30285, 30273, 30260, 30248, 30235, 30223, 30211, 30198, 30186, 30174, 30161, 30149, 30136, 30124, 30112, 30099, 30087, 30075, 30063, 30050, 30038, 30026, 30013, 30001, 29989, 29976, 29964, 29952, 29940, 29927, 29915, 29903, 29891, 29878, 29866, 29854, 29842, 29830, 29817, 29805, 29793, 29781, 29769, 29756, 29744, 29732, 29720, 29708, 29696, 29683, 29671, 29659, 29647, 29635, 29623, 29611, 29599, 29586, 29574, 29562, 29550, 29538, 29526, 29514, 29502, 29490, 29478, 29466, 29454, 29442, 29430, 29418, 29406, 29394, 29381, 29369, 29357, 29345, 29334, 29322, 29310, 29298, 29286, 29274, 29262, 29250, 29238, 29226, 29214, 29202, 29190, 29178, 29166, 29154, 29142, 29130, 29119, 29107, 29095, 29083, 29071, 29059, 29047, 29035, 29024, 29012, 29000, 28988, 28976, 28964, 28953, 28941, 28929, 28917, 28905, 28894, 28882, 28870, 28858, 28847, 28835, 28823, 28811, 28799, 28788, 28776, 28764, 28753, 28741, 28729, 28717, 28706, 28694, 28682, 28671, 28659, 28647, 28636, 28624, 28612, 28601, 28589, 28577, 28566, 28554, 28542, 28531, 28519, 28507, 28496, 28484, 28473, 28461, 28449, 28438, 28426, 28415, 28403, 28391, 28380, 28368, 28357, 28345, 28334, 28322, 28311, 28299, 28288, 28276, 28265, 28253, 28242, 28230, 28219, 28207, 28196, 28184, 28173, 28161, 28150, 28138, 28127, 28115, 28104, 28093, 28081, 28070, 28058, 28047, 28035, 28024, 28013, 28001, 27990, 27978, 27967, 27956, 27944, 27933, 27922, 27910, 27899, 27888, 27876, 27865, 27854, 27842, 27831, 27820, 27808, 27797, 27786, 27774, 27763, 27752, 27741, 27729, 27718, 27707, 27696, 27684, 27673, 27662, 27651, 27639, 27628, 27617, 27606, 27594, 27583, 27572, 27561, 27550, 27538, 27527, 27516, 27505, 27494, 27483, 27471, 27460, 27449, 27438, 27427, 27416, 27405, 27393, 27382, 27371, 27360, 27349, 27338, 27327, 27316, 27305, 27294, 27283, 27271, 27260, 27249, 27238, 27227, 27216, 27205, 27194, 27183, 27172, 27161, 27150, 27139, 27128, 27117, 27106, 27095, 27084, 27073, 27062, 27051, 27040, 27029, 27018, 27007, 26996, 26985, 26974, 26964, 26953, 26942, 26931, 26920, 26909, 26898, 26887, 26876, 26865, 26854, 26844, 26833, 26822, 26811, 26800, 26789, 26778, 26768, 26757, 26746, 26735, 26724, 26713, 26703, 26692, 26681, 26670, 26659, 26649, 26638, 26627, 26616, 26605, 26595, 26584, 26573, 26562, 26552, 26541, 26530, 26519, 26509, 26498, 26487, 26477, 26466, 26455, 26444, 26434, 26423, 26412, 26402, 26391, 26380, 26370, 26359, 26348, 26338, 26327, 26316, 26306, 26295, 26285, 26274, 26263, 26253, 26242, 26231, 26221, 26210, 26200, 26189, 26179, 26168, 26157, 26147, 26136, 26126, 26115, 26105, 26094, 26083, 26073, 26062, 26052, 26041, 26031, 26020, 26010, 25999, 25989, 25978, 25968, 25957, 25947, 25936, 25926, 25915, 25905, 25895, 25884, 25874, 25863, 25853, 25842, 25832, 25821, 25811, 25801, 25790, 25780, 25769, 25759, 25749, 25738, 25728, 25717, 25707, 25697, 25686, 25676, 25666, 25655, 25645, 25635, 25624, 25614, 25604, 25593, 25583, 25573, 25562, 25552, 25542, 25531, 25521, 25511, 25501, 25490, 25480, 25470, 25460, 25449, 25439, 25429, 25419, 25408, 25398, 25388, 25378, 25367, 25357, 25347, 25337, 25327, 25316, 25306, 25296, 25286, 25276, 25265, 25255, 25245, 25235, 25225, 25215, 25204, 25194, 25184, 25174, 25164, 25154, 25144, 25133, 25123, 25113, 25103, 25093, 25083, 25073, 25063, 25053, 25043, 25033, 25022, 25012, 25002, 24992, 24982, 24972, 24962, 24952, 24942, 24932, 24922, 24912, 24902, 24892, 24882, 24872, 24862, 24852, 24842, 24832, 24822, 24812, 24802, 24792, 24782, 24772, 24762, 24752, 24742, 24732, 24722, 24712, 24703, 24693, 24683, 24673, 24663, 24653, 24643, 24633, 24623, 24613, 24603, 24594, 24584, 24574, 24564, 24554, 24544, 24534, 24525, 24515, 24505, 24495, 24485, 24475, 24466, 24456, 24446, 24436, 24426, 24416, 24407, 24397, 24387, 24377, 24368, 24358, 24348, 24338, 24328, 24319, 24309, 24299, 24289, 24280, 24270, 24260, 24250, 24241, 24231, 24221, 24212, 24202, 24192, 24182, 24173, 24163, 24153, 24144, 24134, 24124, 24115, 24105, 24095, 24086, 24076, 24066, 24057, 24047, 24037, 24028, 24018, 24009, 23999, 23989, 23980, 23970, 23961, 23951, 23941, 23932, 23922, 23913, 23903, 23893, 23884, 23874, 23865, 23855, 23846, 23836, 23827, 23817, 23807, 23798, 23788, 23779, 23769, 23760, 23750, 23741, 23731, 23722, 23712, 23703, 23693, 23684, 23674, 23665, 23655, 23646, 23637, 23627, 23618, 23608, 23599, 23589, 23580, 23570, 23561, 23552, 23542, 23533, 23523, 23514, 23505, 23495, 23486, 23476, 23467, 23458, 23448, 23439, 23429, 23420, 23411, 23401, 23392, 23383, 23373, 23364, 23355, 23345, 23336, 23327, 23317, 23308, 23299, 23289, 23280, 23271, 23262, 23252, 23243, 23234, 23224, 23215, 23206, 23197, 23187, 23178, 23169, 23160, 23150, 23141, 23132, 23123, 23113, 23104, 23095, 23086, 23076, 23067, 23058, 23049, 23040, 23030, 23021, 23012, 23003, 22994, 22985, 22975, 22966, 22957, 22948, 22939, 22930, 22920, 22911, 22902, 22893, 22884, 22875, 22866, 22857, 22847, 22838, 22829, 22820, 22811, 22802, 22793, 22784, 22775, 22766, 22757, 22747, 22738, 22729, 22720, 22711, 22702, 22693, 22684, 22675, 22666, 22657, 22648, 22639, 22630, 22621, 22612, 22603, 22594, 22585, 22576, 22567, 22558, 22549, 22540, 22531, 22522, 22513, 22504, 22495, 22486, 22477, 22468, 22459, 22450, 22441, 22432, 22424, 22415, 22406, 22397, 22388, 22379, 22370, 22361, 22352, 22343, 22334, 22326, 22317, 22308, 22299, 22290, 22281, 22272, 22264, 22255, 22246, 22237, 22228, 22219, 22210, 22202, 22193, 22184, 22175, 22166, 22158, 22149, 22140, 22131, 22122, 22114, 22105, 22096, 22087, 22078, 22070, 22061, 22052, 22043, 22035, 22026, 22017, 22008, 22000, 21991, 21982, 21973, 21965, 21956, 21947, 21938, 21930, 21921, 21912, 21904, 21895, 21886, 21878, 21869, 21860, 21851, 21843, 21834, 21825, 21817, 21808, 21800, 21791, 21782, 21774, 21765, 21756, 21748, 21739, 21730, 21722, 21713, 21705, 21696, 21687, 21679, 21670, 21662, 21653, 21644, 21636, 21627, 21619, 21610, 21601, 21593, 21584, 21576, 21567, 21559, 21550, 21542, 21533, 21525, 21516, 21507, 21499, 21490, 21482, 21473, 21465, 21456, 21448, 21439, 21431, 21422, 21414, 21405, 21397, 21388, 21380, 21371, 21363, 21355, 21346, 21338, 21329, 21321, 21312, 21304, 21295, 21287, 21279, 21270, 21262, 21253, 21245, 21236, 21228, 21220, 21211, 21203, 21194, 21186, 21178, 21169, 21161, 21153, 21144, 21136, 21127, 21119, 21111, 21102, 21094, 21086, 21077, 21069, 21061, 21052, 21044, 21036, 21027, 21019, 21011, 21002, 20994, 20986, 20978, 20969, 20961, 20953, 20944, 20936, 20928, 20920, 20911, 20903, 20895, 20887, 20878, 20870, 20862, 20854, 20845, 20837, 20829, 20821, 20812, 20804, 20796, 20788, 20779, 20771, 20763, 20755, 20747, 20738, 20730, 20722, 20714, 20706, 20698, 20689, 20681, 20673, 20665, 20657, 20649, 20640, 20632, 20624, 20616, 20608, 20600, 20592, 20583, 20575, 20567, 20559, 20551, 20543, 20535, 20527, 20519, 20510, 20502, 20494, 20486, 20478, 20470, 20462, 20454, 20446, 20438, 20430, 20422, 20414, 20406, 20398, 20389, 20381, 20373, 20365, 20357, 20349, 20341, 20333, 20325, 20317, 20309, 20301, 20293, 20285, 20277, 20269, 20261, 20253, 20245, 20237, 20229, 20221, 20213, 20205, 20197, 20190, 20182, 20174, 20166, 20158, 20150, 20142, 20134, 20126, 20118, 20110, 20102, 20094, 20086, 20079, 20071, 20063, 20055, 20047, 20039, 20031, 20023, 20015, 20007, 20000, 19992, 19984, 19976, 19968, 19960, 19952, 19945, 19937, 19929, 19921, 19913, 19905, 19898, 19890, 19882, 19874, 19866, 19858, 19851, 19843, 19835, 19827, 19819, 19812, 19804, 19796, 19788, 19781, 19773, 19765, 19757, 19749, 19742, 19734, 19726, 19718, 19711, 19703, 19695, 19687, 19680, 19672, 19664, 19657, 19649, 19641, 19633, 19626, 19618, 19610, 19603, 19595, 19587, 19579, 19572, 19564, 19556, 19549, 19541, 19533, 19526, 19518, 19510, 19503, 19495, 19487, 19480, 19472, 19464, 19457, 19449, 19442, 19434, 19426, 19419, 19411, 19403, 19396, 19388, 19381, 19373, 19365, 19358, 19350, 19343, 19335, 19327, 19320, 19312, 19305, 19297, 19290, 19282, 19274, 19267, 19259, 19252, 19244, 19237, 19229, 19222, 19214, 19207, 19199, 19192, 19184, 19176, 19169, 19161, 19154, 19146, 19139, 19131, 19124, 19116, 19109, 19101, 19094, 19086, 19079, 19072, 19064, 19057, 19049, 19042, 19034, 19027, 19019, 19012, 19004, 18997, 18990, 18982, 18975, 18967, 18960, 18952, 18945, 18938, 18930, 18923, 18915, 18908, 18901, 18893, 18886, 18878, 18871, 18864, 18856, 18849, 18841, 18834, 18827, 18819, 18812, 18805, 18797, 18790, 18783, 18775, 18768, 18761, 18753, 18746, 18739, 18731, 18724, 18717, 18709, 18702, 18695, 18687, 18680, 18673, 18665, 18658, 18651, 18644, 18636, 18629, 18622, 18614, 18607, 18600, 18593, 18585, 18578, 18571, 18564, 18556, 18549, 18542, 18535, 18527, 18520, 18513, 18506, 18498, 18491, 18484, 18477, 18470, 18462, 18455, 18448, 18441, 18434, 18426, 18419, 18412, 18405, 18398, 18390, 18383, 18376, 18369, 18362, 18355, 18347, 18340, 18333, 18326, 18319, 18312, 18304, 18297, 18290, 18283, 18276, 18269, 18262, 18255, 18247, 18240, 18233, 18226, 18219, 18212, 18205, 18198, 18191, 18183, 18176, 18169, 18162, 18155, 18148, 18141, 18134, 18127, 18120, 18113, 18106, 18099, 18092, 18085, 18077, 18070, 18063, 18056, 18049, 18042, 18035, 18028, 18021, 18014, 18007, 18000, 17993, 17986, 17979, 17972, 17965, 17958, 17951, 17944, 17937, 17930, 17923, 17916, 17909, 17902, 17895, 17888, 17881, 17874, 17867, 17861, 17854, 17847
};

#endif
