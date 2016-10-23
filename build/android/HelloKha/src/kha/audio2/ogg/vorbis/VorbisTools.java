// Generated by Haxe 3.3.0
package kha.audio2.ogg.vorbis;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class VorbisTools extends haxe.lang.HxObject
{
	static
	{
		//line 16 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.EOP = -1;
		//line 18 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.M__PI = 3.14159265358979323846264;
		//line 20 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.DIVTAB_NUMER = 32;
		//line 21 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.DIVTAB_DENOM = 64;
		//line 23 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.INVERSE_DB_TABLE = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (1.0649863e-07) ), ((java.lang.Object) (1.1341951e-07) ), ((java.lang.Object) (1.2079015e-07) ), ((java.lang.Object) (1.2863978e-07) ), ((java.lang.Object) (1.3699951e-07) ), ((java.lang.Object) (1.4590251e-07) ), ((java.lang.Object) (1.5538408e-07) ), ((java.lang.Object) (1.6548181e-07) ), ((java.lang.Object) (1.7623575e-07) ), ((java.lang.Object) (1.8768855e-07) ), ((java.lang.Object) (1.9988561e-07) ), ((java.lang.Object) (2.1287530e-07) ), ((java.lang.Object) (2.2670913e-07) ), ((java.lang.Object) (2.4144197e-07) ), ((java.lang.Object) (2.5713223e-07) ), ((java.lang.Object) (2.7384213e-07) ), ((java.lang.Object) (2.9163793e-07) ), ((java.lang.Object) (3.1059021e-07) ), ((java.lang.Object) (3.3077411e-07) ), ((java.lang.Object) (3.5226968e-07) ), ((java.lang.Object) (3.7516214e-07) ), ((java.lang.Object) (3.9954229e-07) ), ((java.lang.Object) (4.2550680e-07) ), ((java.lang.Object) (4.5315863e-07) ), ((java.lang.Object) (4.8260743e-07) ), ((java.lang.Object) (5.1396998e-07) ), ((java.lang.Object) (5.4737065e-07) ), ((java.lang.Object) (5.8294187e-07) ), ((java.lang.Object) (6.2082472e-07) ), ((java.lang.Object) (6.6116941e-07) ), ((java.lang.Object) (7.0413592e-07) ), ((java.lang.Object) (7.4989464e-07) ), ((java.lang.Object) (7.9862701e-07) ), ((java.lang.Object) (8.5052630e-07) ), ((java.lang.Object) (9.0579828e-07) ), ((java.lang.Object) (9.6466216e-07) ), ((java.lang.Object) (1.0273513e-06) ), ((java.lang.Object) (1.0941144e-06) ), ((java.lang.Object) (1.1652161e-06) ), ((java.lang.Object) (1.2409384e-06) ), ((java.lang.Object) (1.3215816e-06) ), ((java.lang.Object) (1.4074654e-06) ), ((java.lang.Object) (1.4989305e-06) ), ((java.lang.Object) (1.5963394e-06) ), ((java.lang.Object) (1.7000785e-06) ), ((java.lang.Object) (1.8105592e-06) ), ((java.lang.Object) (1.9282195e-06) ), ((java.lang.Object) (2.0535261e-06) ), ((java.lang.Object) (2.1869758e-06) ), ((java.lang.Object) (2.3290978e-06) ), ((java.lang.Object) (2.4804557e-06) ), ((java.lang.Object) (2.6416497e-06) ), ((java.lang.Object) (2.8133190e-06) ), ((java.lang.Object) (2.9961443e-06) ), ((java.lang.Object) (3.1908506e-06) ), ((java.lang.Object) (3.3982101e-06) ), ((java.lang.Object) (3.6190449e-06) ), ((java.lang.Object) (3.8542308e-06) ), ((java.lang.Object) (4.1047004e-06) ), ((java.lang.Object) (4.3714470e-06) ), ((java.lang.Object) (4.6555282e-06) ), ((java.lang.Object) (4.9580707e-06) ), ((java.lang.Object) (5.2802740e-06) ), ((java.lang.Object) (5.6234160e-06) ), ((java.lang.Object) (5.9888572e-06) ), ((java.lang.Object) (6.3780469e-06) ), ((java.lang.Object) (6.7925283e-06) ), ((java.lang.Object) (7.2339451e-06) ), ((java.lang.Object) (7.7040476e-06) ), ((java.lang.Object) (8.2047000e-06) ), ((java.lang.Object) (8.7378876e-06) ), ((java.lang.Object) (9.3057248e-06) ), ((java.lang.Object) (9.9104632e-06) ), ((java.lang.Object) (1.0554501e-05) ), ((java.lang.Object) (1.1240392e-05) ), ((java.lang.Object) (1.1970856e-05) ), ((java.lang.Object) (1.2748789e-05) ), ((java.lang.Object) (1.3577278e-05) ), ((java.lang.Object) (1.4459606e-05) ), ((java.lang.Object) (1.5399272e-05) ), ((java.lang.Object) (1.6400004e-05) ), ((java.lang.Object) (1.7465768e-05) ), ((java.lang.Object) (1.8600792e-05) ), ((java.lang.Object) (1.9809576e-05) ), ((java.lang.Object) (2.1096914e-05) ), ((java.lang.Object) (2.2467911e-05) ), ((java.lang.Object) (2.3928002e-05) ), ((java.lang.Object) (2.5482978e-05) ), ((java.lang.Object) (2.7139006e-05) ), ((java.lang.Object) (2.8902651e-05) ), ((java.lang.Object) (3.0780908e-05) ), ((java.lang.Object) (3.2781225e-05) ), ((java.lang.Object) (3.4911534e-05) ), ((java.lang.Object) (3.7180282e-05) ), ((java.lang.Object) (3.9596466e-05) ), ((java.lang.Object) (4.2169667e-05) ), ((java.lang.Object) (4.4910090e-05) ), ((java.lang.Object) (4.7828601e-05) ), ((java.lang.Object) (5.0936773e-05) ), ((java.lang.Object) (5.4246931e-05) ), ((java.lang.Object) (5.7772202e-05) ), ((java.lang.Object) (6.1526565e-05) ), ((java.lang.Object) (6.5524908e-05) ), ((java.lang.Object) (6.9783085e-05) ), ((java.lang.Object) (7.4317983e-05) ), ((java.lang.Object) (7.9147585e-05) ), ((java.lang.Object) (8.4291040e-05) ), ((java.lang.Object) (8.9768747e-05) ), ((java.lang.Object) (9.5602426e-05) ), ((java.lang.Object) (0.00010181521) ), ((java.lang.Object) (0.00010843174) ), ((java.lang.Object) (0.00011547824) ), ((java.lang.Object) (0.00012298267) ), ((java.lang.Object) (0.00013097477) ), ((java.lang.Object) (0.00013948625) ), ((java.lang.Object) (0.00014855085) ), ((java.lang.Object) (0.00015820453) ), ((java.lang.Object) (0.00016848555) ), ((java.lang.Object) (0.00017943469) ), ((java.lang.Object) (0.00019109536) ), ((java.lang.Object) (0.00020351382) ), ((java.lang.Object) (0.00021673929) ), ((java.lang.Object) (0.00023082423) ), ((java.lang.Object) (0.00024582449) ), ((java.lang.Object) (0.00026179955) ), ((java.lang.Object) (0.00027881276) ), ((java.lang.Object) (0.00029693158) ), ((java.lang.Object) (0.00031622787) ), ((java.lang.Object) (0.00033677814) ), ((java.lang.Object) (0.00035866388) ), ((java.lang.Object) (0.00038197188) ), ((java.lang.Object) (0.00040679456) ), ((java.lang.Object) (0.00043323036) ), ((java.lang.Object) (0.00046138411) ), ((java.lang.Object) (0.00049136745) ), ((java.lang.Object) (0.00052329927) ), ((java.lang.Object) (0.00055730621) ), ((java.lang.Object) (0.00059352311) ), ((java.lang.Object) (0.00063209358) ), ((java.lang.Object) (0.00067317058) ), ((java.lang.Object) (0.00071691700) ), ((java.lang.Object) (0.00076350630) ), ((java.lang.Object) (0.00081312324) ), ((java.lang.Object) (0.00086596457) ), ((java.lang.Object) (0.00092223983) ), ((java.lang.Object) (0.00098217216) ), ((java.lang.Object) (0.0010459992) ), ((java.lang.Object) (0.0011139742) ), ((java.lang.Object) (0.0011863665) ), ((java.lang.Object) (0.0012634633) ), ((java.lang.Object) (0.0013455702) ), ((java.lang.Object) (0.0014330129) ), ((java.lang.Object) (0.0015261382) ), ((java.lang.Object) (0.0016253153) ), ((java.lang.Object) (0.0017309374) ), ((java.lang.Object) (0.0018434235) ), ((java.lang.Object) (0.0019632195) ), ((java.lang.Object) (0.0020908006) ), ((java.lang.Object) (0.0022266726) ), ((java.lang.Object) (0.0023713743) ), ((java.lang.Object) (0.0025254795) ), ((java.lang.Object) (0.0026895994) ), ((java.lang.Object) (0.0028643847) ), ((java.lang.Object) (0.0030505286) ), ((java.lang.Object) (0.0032487691) ), ((java.lang.Object) (0.0034598925) ), ((java.lang.Object) (0.0036847358) ), ((java.lang.Object) (0.0039241906) ), ((java.lang.Object) (0.0041792066) ), ((java.lang.Object) (0.0044507950) ), ((java.lang.Object) (0.0047400328) ), ((java.lang.Object) (0.0050480668) ), ((java.lang.Object) (0.0053761186) ), ((java.lang.Object) (0.0057254891) ), ((java.lang.Object) (0.0060975636) ), ((java.lang.Object) (0.0064938176) ), ((java.lang.Object) (0.0069158225) ), ((java.lang.Object) (0.0073652516) ), ((java.lang.Object) (0.0078438871) ), ((java.lang.Object) (0.0083536271) ), ((java.lang.Object) (0.0088964928) ), ((java.lang.Object) (0.009474637) ), ((java.lang.Object) (0.010090352) ), ((java.lang.Object) (0.010746080) ), ((java.lang.Object) (0.011444421) ), ((java.lang.Object) (0.012188144) ), ((java.lang.Object) (0.012980198) ), ((java.lang.Object) (0.013823725) ), ((java.lang.Object) (0.014722068) ), ((java.lang.Object) (0.015678791) ), ((java.lang.Object) (0.016697687) ), ((java.lang.Object) (0.017782797) ), ((java.lang.Object) (0.018938423) ), ((java.lang.Object) (0.020169149) ), ((java.lang.Object) (0.021479854) ), ((java.lang.Object) (0.022875735) ), ((java.lang.Object) (0.024362330) ), ((java.lang.Object) (0.025945531) ), ((java.lang.Object) (0.027631618) ), ((java.lang.Object) (0.029427276) ), ((java.lang.Object) (0.031339626) ), ((java.lang.Object) (0.033376252) ), ((java.lang.Object) (0.035545228) ), ((java.lang.Object) (0.037855157) ), ((java.lang.Object) (0.040315199) ), ((java.lang.Object) (0.042935108) ), ((java.lang.Object) (0.045725273) ), ((java.lang.Object) (0.048696758) ), ((java.lang.Object) (0.051861348) ), ((java.lang.Object) (0.055231591) ), ((java.lang.Object) (0.058820850) ), ((java.lang.Object) (0.062643361) ), ((java.lang.Object) (0.066714279) ), ((java.lang.Object) (0.071049749) ), ((java.lang.Object) (0.075666962) ), ((java.lang.Object) (0.080584227) ), ((java.lang.Object) (0.085821044) ), ((java.lang.Object) (0.091398179) ), ((java.lang.Object) (0.097337747) ), ((java.lang.Object) (0.10366330) ), ((java.lang.Object) (0.11039993) ), ((java.lang.Object) (0.11757434) ), ((java.lang.Object) (0.12521498) ), ((java.lang.Object) (0.13335215) ), ((java.lang.Object) (0.14201813) ), ((java.lang.Object) (0.15124727) ), ((java.lang.Object) (0.16107617) ), ((java.lang.Object) (0.17154380) ), ((java.lang.Object) (0.18269168) ), ((java.lang.Object) (0.19456402) ), ((java.lang.Object) (0.20720788) ), ((java.lang.Object) (0.22067342) ), ((java.lang.Object) (0.23501402) ), ((java.lang.Object) (0.25028656) ), ((java.lang.Object) (0.26655159) ), ((java.lang.Object) (0.28387361) ), ((java.lang.Object) (0.30232132) ), ((java.lang.Object) (0.32196786) ), ((java.lang.Object) (0.34289114) ), ((java.lang.Object) (0.36517414) ), ((java.lang.Object) (0.38890521) ), ((java.lang.Object) (0.41417847) ), ((java.lang.Object) (0.44109412) ), ((java.lang.Object) (0.46975890) ), ((java.lang.Object) (0.50028648) ), ((java.lang.Object) (0.53279791) ), ((java.lang.Object) (0.56742212) ), ((java.lang.Object) (0.60429640) ), ((java.lang.Object) (0.64356699) ), ((java.lang.Object) (0.68538959) ), ((java.lang.Object) (0.72993007) ), ((java.lang.Object) (0.77736504) ), ((java.lang.Object) (0.82788260) ), ((java.lang.Object) (0.88168307) ), ((java.lang.Object) (0.9389798) ), ((java.lang.Object) (1.0) )});
	}
	
	public VorbisTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public VorbisTools()
	{
		//line 14 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		kha.audio2.ogg.vorbis.VorbisTools.__hx_ctor_kha_audio2_ogg_vorbis_VorbisTools(this);
	}
	
	
	public static void __hx_ctor_kha_audio2_ogg_vorbis_VorbisTools(kha.audio2.ogg.vorbis.VorbisTools __temp_me123)
	{
	}
	
	
	public static int EOP;
	
	public static int[][] integerDivideTable;
	
	public static double M__PI;
	
	public static int DIVTAB_NUMER;
	
	public static int DIVTAB_DENOM;
	
	public static haxe.root.Array<java.lang.Object> INVERSE_DB_TABLE;
	
	public static void _assert(boolean b, java.lang.Object p)
	{
	}
	
	
	public static java.lang.Object neighbors(int[] x, int n)
	{
		//line 100 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int low = -1;
		//line 101 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int high = 65536;
		//line 102 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int plow = 0;
		//line 103 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int phigh = 0;
		//line 105 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 105 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g1 = 0;
			//line 105 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g1 < n ))
			{
				//line 105 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int i = _g1++;
				//line 106 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				if (( ( ((int) (((int[]) (x) )[i]) ) > low ) && ( ((int) (((int[]) (x) )[i]) ) < ((int) (((int[]) (x) )[n]) ) ) )) 
				{
					//line 106 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					plow = i;
					//line 106 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					low = ((int) (((int[]) (x) )[i]) );
				}
				
				//line 107 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				if (( ( ((int) (((int[]) (x) )[i]) ) < high ) && ( ((int) (((int[]) (x) )[i]) ) > ((int) (((int[]) (x) )[n]) ) ) )) 
				{
					//line 107 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					phigh = i;
					//line 107 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					high = ((int) (((int[]) (x) )[i]) );
				}
				
			}
			
		}
		
		//line 109 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return new haxe.lang.DynamicObject(new java.lang.String[]{}, new java.lang.Object[]{}, new java.lang.String[]{"high", "low"}, new double[]{((double) (((double) (phigh) )) ), ((double) (((double) (plow) )) )});
	}
	
	
	public static double floatUnpack(int x)
	{
		//line 118 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double mantissa = 0.0;
		//line 118 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int _int = ((int) (( ((int) (x) ) & ((int) (2097151) ) )) );
		//line 118 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( _int < 0 )) 
		{
			//line 118 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			mantissa = ( 4294967296.0 + _int );
		}
		else
		{
			//line 118 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			mantissa = ( _int + 0.0 );
		}
		
		//line 119 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int sign = ((int) (( ((int) (x) ) & ((int) (-2147483648) ) )) );
		//line 120 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int exp = ((int) (( (((int) (( ((int) (x) ) & ((int) (2145386496) ) )) )) >>> 21 )) );
		//line 121 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double res = ( (( sign != 0 )) ? ( - (mantissa) ) : (mantissa) );
		//line 122 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return ( res * java.lang.Math.pow(((double) (2) ), ((double) (( exp - 788 )) )) );
	}
	
	
	public static int bitReverse(int n)
	{
		//line 127 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		n = ((int) (( ((int) (( (((int) (( ((int) (n) ) & ((int) (-1431655766) ) )) )) >>> 1 )) ) | ((int) (( (((int) (( ((int) (n) ) & ((int) (1431655765) ) )) )) << 1 )) ) )) );
		//line 128 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		n = ((int) (( ((int) (( (((int) (( ((int) (n) ) & ((int) (-858993460) ) )) )) >>> 2 )) ) | ((int) (( (((int) (( ((int) (n) ) & ((int) (858993459) ) )) )) << 2 )) ) )) );
		//line 129 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		n = ((int) (( ((int) (( (((int) (( ((int) (n) ) & ((int) (-252645136) ) )) )) >>> 4 )) ) | ((int) (( (((int) (( ((int) (n) ) & ((int) (252645135) ) )) )) << 4 )) ) )) );
		//line 130 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		n = ((int) (( ((int) (( (((int) (( ((int) (n) ) & ((int) (-16711936) ) )) )) >>> 8 )) ) | ((int) (( (((int) (( ((int) (n) ) & ((int) (16711935) ) )) )) << 8 )) ) )) );
		//line 131 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return ((int) (( ((int) (( ((int) (n) ) >>> 16 )) ) | ((int) (( ((int) (n) ) << 16 )) ) )) );
	}
	
	
	public static int pointCompare(kha.audio2.ogg.vorbis.data.IntPoint a, kha.audio2.ogg.vorbis.data.IntPoint b)
	{
		//line 135 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( a.x < b.x )) 
		{
			//line 135 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			return -1;
		}
		else
		{
			//line 135 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			if (( a.x > b.x )) 
			{
				//line 135 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				return 1;
			}
			else
			{
				//line 135 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				return 0;
			}
			
		}
		
	}
	
	
	public static int uintAsc(int a, int b)
	{
		//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		boolean aNeg = ( ((int) (b) ) < 0 );
		//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		boolean bNeg = ( ((int) (a) ) < 0 );
		//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( (( aNeg != bNeg )) ? (aNeg) : (( ((int) (b) ) > ((int) (a) ) )) )) 
		{
			//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			return -1;
		}
		else
		{
			//line 141 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			if (( ((int) (a) ) == b )) 
			{
				//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				return 0;
			}
			else
			{
				//line 139 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				return 1;
			}
			
		}
		
	}
	
	
	public static int lookup1Values(int entries, int dim)
	{
		//line 150 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int r = ((int) (java.lang.Math.exp(( java.lang.Math.log(((double) (entries) )) / dim ))) );
		//line 151 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( ((int) (java.lang.Math.pow(((double) (( r + 1 )) ), ((double) (dim) ))) ) <= entries )) 
		{
			//line 152 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			 ++ r;
		}
		
		//line 155 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		java.lang.Math.pow(((double) (( r + 1 )) ), ((double) (dim) ));
		//line 156 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		java.lang.Math.pow(((double) (r) ), ((double) (dim) ));
		//line 157 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return r;
	}
	
	
	public static void computeWindow(int n, double[] window)
	{
		//line 162 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int n2 = ( n >> 1 );
		//line 163 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 163 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g1 = 0;
			//line 163 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g1 < n2 ))
			{
				//line 163 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int i = _g1++;
				//line 164 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (window) )[i] = java.lang.Math.sin(( 1.57079632679489656 * kha.audio2.ogg.vorbis.VorbisTools.square(java.lang.Math.sin(( ( ( (( i + 0.5 )) / n2 ) * 0.5 ) * 3.14159265358979323846264 ))) ));
			}
			
		}
		
	}
	
	
	public static double square(double f)
	{
		//line 169 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return ( f * f );
	}
	
	
	public static void computeBitReverse(int n, int[] rev)
	{
		//line 174 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		haxe.root.Array<java.lang.Object> log2_4 = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{0, 1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4});
		//line 174 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int ld = ( (( (( n < 16384 )) ? (( (( n < 16 )) ? (((int) (haxe.lang.Runtime.toInt(log2_4.__get(n))) )) : (( (( n < 512 )) ? (( 5 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 5 )))) ) )) : (( 10 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 10 )))) ) )) )) )) : (( (( n < 16777216 )) ? (( (( n < 524288 )) ? (( 15 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 15 )))) ) )) : (( 20 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 20 )))) ) )) )) : (( (( n < 536870912 )) ? (( 25 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 25 )))) ) )) : (( (( n < -2147483648 )) ? (( 30 + ((int) (haxe.lang.Runtime.toInt(log2_4.__get(( n >> 30 )))) ) )) : (0) )) )) )) )) - 1 );
		//line 175 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int n8 = ( n >> 3 );
		//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g1 = 0;
			//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g1 < n8 ))
			{
				//line 177 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int i = _g1++;
				//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				{
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					int n1 = i;
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					n1 = ((int) (( ((int) (( (((int) (( ((int) (n1) ) & ((int) (-1431655766) ) )) )) >>> 1 )) ) | ((int) (( (((int) (( ((int) (n1) ) & ((int) (1431655765) ) )) )) << 1 )) ) )) );
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					n1 = ((int) (( ((int) (( (((int) (( ((int) (n1) ) & ((int) (-858993460) ) )) )) >>> 2 )) ) | ((int) (( (((int) (( ((int) (n1) ) & ((int) (858993459) ) )) )) << 2 )) ) )) );
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					n1 = ((int) (( ((int) (( (((int) (( ((int) (n1) ) & ((int) (-252645136) ) )) )) >>> 4 )) ) | ((int) (( (((int) (( ((int) (n1) ) & ((int) (252645135) ) )) )) << 4 )) ) )) );
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					n1 = ((int) (( ((int) (( (((int) (( ((int) (n1) ) & ((int) (-16711936) ) )) )) >>> 8 )) ) | ((int) (( (((int) (( ((int) (n1) ) & ((int) (16711935) ) )) )) << 8 )) ) )) );
					//line 178 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					((int[]) (rev) )[i] = ( ((int) (( (((int) (( ((int) (( ((int) (n1) ) >>> 16 )) ) | ((int) (( ((int) (n1) ) << 16 )) ) )) )) >>> ( ( 32 - ld ) + 3 ) )) ) << 2 );
				}
				
			}
			
		}
		
	}
	
	
	public static void computeTwiddleFactors(int n, double[] af, double[] bf, double[] cf)
	{
		//line 184 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int n4 = ( n >> 2 );
		//line 185 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int n8 = ( n >> 3 );
		//line 187 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int k2 = 0;
		//line 188 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 188 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g1 = 0;
			//line 188 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g1 < n4 ))
			{
				//line 188 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int k = _g1++;
				//line 189 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (af) )[k2] = java.lang.Math.cos(( ( ( 4 * k ) * 3.14159265358979323846264 ) / n ));
				//line 190 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (af) )[( k2 + 1 )] =  - (java.lang.Math.sin(( ( ( 4 * k ) * 3.14159265358979323846264 ) / n ))) ;
				//line 191 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (bf) )[k2] = ( java.lang.Math.cos(( ( ( (( k2 + 1 )) * 3.14159265358979323846264 ) / n ) / 2 )) * 0.5 );
				//line 192 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (bf) )[( k2 + 1 )] = ( java.lang.Math.sin(( ( ( (( k2 + 1 )) * 3.14159265358979323846264 ) / n ) / 2 )) * 0.5 );
				//line 193 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				k2 += 2;
			}
			
		}
		
		//line 196 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int k21 = 0;
		//line 197 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 197 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g11 = 0;
			//line 197 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g11 < n8 ))
			{
				//line 197 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				 ++ _g11;
				//line 198 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (cf) )[k21] = java.lang.Math.cos(( ( ( 2 * (( k21 + 1 )) ) * 3.14159265358979323846264 ) / n ));
				//line 199 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (cf) )[( k21 + 1 )] =  - (java.lang.Math.sin(( ( ( 2 * (( k21 + 1 )) ) * 3.14159265358979323846264 ) / n ))) ;
				//line 200 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				k21 += 2;
			}
			
		}
		
	}
	
	
	public static void drawLine(double[] output, int x0, int y0, int x1, int y1, int n)
	{
		//line 207 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		boolean tmp = ( kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable == null );
		//line 207 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (tmp) 
		{
			//line 208 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int[][] this1 = new int[32][];
			//line 208 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable = ((int[][]) (this1) );
			//line 209 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			{
				//line 209 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int _g = 0;
				//line 209 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				while (( _g < 32 ))
				{
					//line 209 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					int i = _g++;
					//line 210 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					{
						//line 210 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
						int[] this2 = new int[64];
						//line 210 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
						((int[][]) (kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable) )[i] = ((int[]) (this2) );
					}
					
					//line 211 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					{
						//line 211 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
						int _g1 = 1;
						//line 211 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
						while (( _g1 < 64 ))
						{
							//line 211 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
							int j = _g1++;
							//line 212 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
							((int[]) (((int[][]) (kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable) )[i]) )[j] = ((int) (( i / j )) );
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 217 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int dy = ( y1 - y0 );
		//line 218 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int adx = ( x1 - x0 );
		//line 219 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int ady = ( (( dy < 0 )) ? ( - (dy) ) : (dy) );
		//line 220 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int base = 0;
		//line 222 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int y = y0;
		//line 223 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int err = 0;
		//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int sy = 0;
		//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( ( adx < 64 ) && ( ady < 32 ) )) 
		{
			//line 225 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			if (( dy < 0 )) 
			{
				//line 226 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				base =  - (((int) (((int[]) (((int[][]) (kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable) )[ady]) )[adx]) )) ;
				//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				sy = ( base - 1 );
			}
			else
			{
				//line 229 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				base = ((int) (((int[]) (((int[][]) (kha.audio2.ogg.vorbis.VorbisTools.integerDivideTable) )[ady]) )[adx]) );
				//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				sy = ( base + 1 );
			}
			
		}
		else
		{
			//line 233 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			base = ((int) (( dy / adx )) );
			//line 234 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			if (( dy < 0 )) 
			{
				//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				sy = ( base - 1 );
			}
			else
			{
				//line 224 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				sy = ( base + 1 );
			}
			
		}
		
		//line 240 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		ady -= ( (( (( base < 0 )) ? ( - (base) ) : (base) )) * adx );
		//line 241 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( x1 > n )) 
		{
			//line 242 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			x1 = n;
		}
		
		//line 245 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		((double[]) (output) )[x0] = ( ((double) (((double[]) (output) )[x0]) ) * ((double) (haxe.lang.Runtime.toDouble(kha.audio2.ogg.vorbis.VorbisTools.INVERSE_DB_TABLE.__get(y0))) ) );
		//line 247 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 247 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g11 = ( x0 + 1 );
			//line 247 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g2 = x1;
			//line 247 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g11 < _g2 ))
			{
				//line 247 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int i1 = _g11++;
				//line 248 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				err += ady;
				//line 249 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				if (( err >= adx )) 
				{
					//line 250 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					err -= adx;
					//line 251 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					y += sy;
				}
				else
				{
					//line 253 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
					y += base;
				}
				
				//line 255 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (output) )[i1] = ( ((double) (((double[]) (output) )[i1]) ) * ((double) (haxe.lang.Runtime.toDouble(kha.audio2.ogg.vorbis.VorbisTools.INVERSE_DB_TABLE.__get(y))) ) );
			}
			
		}
		
	}
	
	
	public static int predictPoint(int x, int x0, int x1, int y0, int y1)
	{
		//line 266 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int dy = ( y1 - y0 );
		//line 267 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int adx = ( x1 - x0 );
		//line 269 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double err = ( java.lang.Math.abs(((double) (dy) )) * (( x - x0 )) );
		//line 270 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		int off = ((int) (( err / adx )) );
		//line 271 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		if (( dy < 0 )) 
		{
			//line 271 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			return ( y0 - off );
		}
		else
		{
			//line 271 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			return ( y0 + off );
		}
		
	}
	
	
	public static double[] emptyFloatVector(int len)
	{
		//line 275 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double[] this1 = new double[len];
		//line 275 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double[] vec = ((double[]) (this1) );
		//line 281 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return vec;
	}
	
	
	public static double[] copyVector(double[] source)
	{
		//line 285 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double[] this1 = new double[((double[]) (source) ).length];
		//line 285 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		double[] dest = ((double[]) (this1) );
		//line 286 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		{
			//line 286 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g1 = 0;
			//line 286 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			int _g = ((double[]) (source) ).length;
			//line 286 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
			while (( _g1 < _g ))
			{
				//line 286 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				int i = _g1++;
				//line 287 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
				((double[]) (dest) )[i] = ((double) (((double[]) (source) )[i]) );
			}
			
		}
		
		//line 289 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return dest;
	}
	
	
	public static java.lang.Object __hx_createEmpty()
	{
		//line 14 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return new kha.audio2.ogg.vorbis.VorbisTools(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public static java.lang.Object __hx_create(haxe.root.Array arr)
	{
		//line 14 "/usr/local/lib/haxe/lib/kha/git/Sources/kha/audio2/ogg/vorbis/VorbisTools.hx"
		return new kha.audio2.ogg.vorbis.VorbisTools();
	}
	
	
}

