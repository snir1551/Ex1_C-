/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
    string text1 = "xxx b yyy";
    CHECK(find(text1, "p") == string("b"));
    CHECK(find(text1, "b") == string("b"));

    string text2 = "xxx p yyy";
    CHECK(find(text2, "p") == string("p"));
    CHECK(find(text2, "b") == string("p"));

    string text3 = "xxx bbb ppppppppp pppp yyy";
    CHECK(find(text3, "bbbbbbbbb") == string("ppppppppp"));
    CHECK(find(text3, "bbbb") == string("pppp"));
    CHECK(find(text3, "ppp") == string("bbb"));
    CHECK(find(text3, "bpb") == string("bbb"));
    CHECK(find(text3, "bpp") == string("bbb"));
    CHECK(find(text3, "ppb") == string("bbb"));
    CHECK(find(text3, "pbb") == string("bbb"));
    CHECK(find(text3, "bbbb") == string("pppp"));
    CHECK(find(text3, "pbbb") == string("pppp"));
    CHECK(find(text3, "bpbb") == string("pppp"));
    CHECK(find(text3, "bbpb") == string("pppp"));
    CHECK(find(text3, "bbbp") == string("pppp"));
    CHECK(find(text3, "pbpbpbpbp") == string("ppppppppp"));
    CHECK(find(text3, "pbpbpbpbb") == string("ppppppppp"));
    CHECK(find(text3, "pbpbpbbbp") == string("ppppppppp"));
    CHECK(find(text3, "pbpbbbbbp") == string("ppppppppp"));
    CHECK(find(text3, "bpbpbpbpb") == string("ppppppppp"));

    string text4 = "happy xxx yyy";
    CHECK(find(text4, "happy") == string("happy"));
    CHECK(find(text4, "habby") == string("happy"));
    CHECK(find(text4, "hapby") == string("happy"));
    CHECK(find(text4, "habpy") == string("happy"));

    string text5 = "xxx yyy happy";
    CHECK(find(text5, "happy") == string("happy"));
    CHECK(find(text5, "habby") == string("happy"));
    CHECK(find(text5, "hapby") == string("happy"));
    CHECK(find(text5, "habpy") == string("happy"));

    string text6 = " x  xx       yyy               happy                     ";
    CHECK(find(text6, "happy") == string("happy"));
    CHECK(find(text6, "habby") == string("happy"));
    CHECK(find(text6, "hapby") == string("happy"));
    CHECK(find(text6, "habpy") == string("happy"));

    string text7 = "happa happb happc happc happd happe happf happg happh happy happa";
    CHECK(find(text7, "happy") == string("happy"));
    CHECK(find(text7, "habby") == string("happy"));
    CHECK(find(text7, "hapby") == string("happy"));
    CHECK(find(text7, "habpy") == string("happy"));

    string text8 = "happj happk happl happm happn happo happp happq happy happa";
    CHECK(find(text8, "happy") == string("happy"));
    CHECK(find(text8, "habby") == string("happy"));
    CHECK(find(text8, "hapby") == string("happy"));
    CHECK(find(text8, "habpy") == string("happy"));

    string text9 = "happr happs happt happu happv happw happx happz happy happa";
    CHECK(find(text9, "happy") == string("happy"));
    CHECK(find(text9, "habby") == string("happy"));
    CHECK(find(text9, "hapby") == string("happy"));
    CHECK(find(text9, "habpy") == string("happy"));

    string text10 = "xxx happ y happy yyy";
    CHECK(find(text10, "happy") == string("happy"));
    CHECK(find(text10, "habby") == string("happy"));
    CHECK(find(text10, "hapby") == string("happy"));
    CHECK(find(text10, "habpy") == string("happy"));
}


TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
    CHECK(find(text, "HAPPi") == string("Happi"));
    CHECK(find(text, "HAPpi") == string("Happi"));
    CHECK(find(text, "HAppi") == string("Happi"));
    CHECK(find(text, "HAppI") == string("Happi"));
    CHECK(find(text, "HappI") == string("Happi"));
    CHECK(find(text, "happI") == string("Happi"));

    string text1 = "xxx Happi yyy";
    CHECK(find(text1, "happi") == string("Happi"));
    CHECK(find(text1, "Happi") == string("Happi"));
    CHECK(find(text1, "HAPPI") == string("Happi"));
    CHECK(find(text1, "HaPpI") == string("Happi"));
    
    CHECK(find(text1, "HAPPi") == string("Happi"));
    CHECK(find(text1, "HAPpi") == string("Happi"));
    CHECK(find(text1, "HAppi") == string("Happi"));
    CHECK(find(text1, "HAppI") == string("Happi"));
    CHECK(find(text1, "HappI") == string("Happi"));
    CHECK(find(text1, "happI") == string("Happi"));

    string text2 = "xxx yyy Happi";
    CHECK(find(text2, "happi") == string("Happi"));
    CHECK(find(text2, "Happi") == string("Happi"));
    CHECK(find(text2, "HAPPI") == string("Happi"));
    CHECK(find(text2, "HaPpI") == string("Happi"));
    
    CHECK(find(text2, "HAPPi") == string("Happi"));
    CHECK(find(text2, "HAPpi") == string("Happi"));
    CHECK(find(text2, "HAppi") == string("Happi"));
    CHECK(find(text2, "HAppI") == string("Happi"));
    CHECK(find(text2, "HappI") == string("Happi"));
    CHECK(find(text2, "happI") == string("Happi"));

    string text3 = "xxx yyy abcdefghijklmnopqrstuvwxyz";
    CHECK(find(text3, "abcdefghijklmnopqrstuvwxyz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUVWXYz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUVWXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUVWxYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUVwXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTUvWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRSTuVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRStUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQRsTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPQrSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOPqRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNOpQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMNoPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLMnOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKLmNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJKlMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIJkLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHIjKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGHiJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFGhIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEFgHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDEfGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCDeFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABCdEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "ABcDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "AbCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "aBCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "aBcDeFgHiJkLmNoPqRsTuVwXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text3, "AbCdEfGhIjKlMnOpQrStUvWxYz") == string("abcdefghijklmnopqrstuvwxyz"));

    string text4 = "xxx abcdefghijklmnopqrstuvwxyz yyy";
    CHECK(find(text4, "abcdefghijklmnopqrstuvwxyz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUVWXYz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUVWXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUVWxYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUVwXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTUvWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRSTuVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRStUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQRsTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPQrSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOPqRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNOpQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMNoPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLMnOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKLmNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJKlMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIJkLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHIjKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGHiJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFGhIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEFgHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDEfGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCDeFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABCdEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "ABcDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "AbCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "aBCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "aBcDeFgHiJkLmNoPqRsTuVwXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text4, "AbCdEfGhIjKlMnOpQrStUvWxYz") == string("abcdefghijklmnopqrstuvwxyz"));
    string text5 = "abcdefghijklmnopqrstuvwxyz xxx yyy";
    CHECK(find(text5, "abcdefghijklmnopqrstuvwxyz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUVWXYz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUVWXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUVWxYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUVwXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTUvWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRSTuVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRStUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQRsTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPQrSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOPqRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNOpQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMNoPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLMnOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKLmNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJKlMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIJkLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHIjKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGHiJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFGhIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEFgHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDEfGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCDeFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABCdEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "ABcDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "AbCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "aBCDEFGHIJKLMNOPQRSTUVWXYZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "aBcDeFgHiJkLmNoPqRsTuVwXyZ") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text5, "AbCdEfGhIjKlMnOpQrStUvWxYz") == string("abcdefghijklmnopqrstuvwxyz"));


}



TEST_CASE("Test replacement of f and b") {
    string text = "xxx haffy yyy";
    CHECK(find(text, "habby") == string("haffy"));
    CHECK(find(text, "habfy") == string("haffy"));
    CHECK(find(text, "hafby") == string("haffy"));
    CHECK(find(text, "haffy") == string("haffy"));
    string text1 = "haffy xxx yyy";
    CHECK(find(text1, "habby") == string("haffy"));
    CHECK(find(text1, "habfy") == string("haffy"));
    CHECK(find(text1, "hafby") == string("haffy"));
    CHECK(find(text1, "haffy") == string("haffy"));
    string text2 = "xxx yyy haffy";
    CHECK(find(text2, "habby") == string("haffy"));
    CHECK(find(text2, "habfy") == string("haffy"));
    CHECK(find(text2, "hafby") == string("haffy"));
    CHECK(find(text2, "haffy") == string("haffy"));

}
TEST_CASE("Test replacement of f and p") {
    string text = "xxx haffy yyy";
    CHECK(find(text, "happy") == string("haffy"));
    CHECK(find(text, "hapfy") == string("haffy"));
    CHECK(find(text, "hafpy") == string("haffy"));
    CHECK(find(text, "haffy") == string("haffy"));
    string text1 = "haffy xxx yyy";
    CHECK(find(text1, "happy") == string("haffy"));
    CHECK(find(text1, "hapfy") == string("haffy"));
    CHECK(find(text1, "hafpy") == string("haffy"));
    CHECK(find(text1, "haffy") == string("haffy"));
    string text2 = "xxx yyy haffy";
    CHECK(find(text2, "happy") == string("haffy"));
    CHECK(find(text2, "hapfy") == string("haffy"));
    CHECK(find(text2, "hafpy") == string("haffy"));
    CHECK(find(text2, "haffy") == string("haffy"));
    
}
TEST_CASE("Test replacement of b and p and f") {
    string text = "xxx pfb yyy";
    CHECK(find(text, "fbp") == string("pfb"));
    CHECK(find(text, "pbf") == string("pfb"));
    CHECK(find(text, "bfp") == string("pfb"));
    CHECK(find(text, "fff") == string("pfb"));
    CHECK(find(text, "bbb") == string("pfb"));
    CHECK(find(text, "ppp") == string("pfb"));
    CHECK(find(text, "pfp") == string("pfb"));
    CHECK(find(text, "pbp") == string("pfb"));
    CHECK(find(text, "bfb") == string("pfb"));
    string text1 = "pfb xxx yyy";
    CHECK(find(text1, "fbp") == string("pfb"));
    CHECK(find(text1, "pbf") == string("pfb"));
    CHECK(find(text1, "bfp") == string("pfb"));
    CHECK(find(text1, "fff") == string("pfb"));
    CHECK(find(text1, "bbb") == string("pfb"));
    CHECK(find(text1, "ppp") == string("pfb"));
    CHECK(find(text1, "pfp") == string("pfb"));
    CHECK(find(text1, "pbp") == string("pfb"));
    CHECK(find(text1, "bfb") == string("pfb"));
    string text2 = "xxx yyy pfb";
    CHECK(find(text2, "fbp") == string("pfb"));
    CHECK(find(text2, "pbf") == string("pfb"));
    CHECK(find(text2, "bfp") == string("pfb"));
    CHECK(find(text2, "fff") == string("pfb"));
    CHECK(find(text2, "bbb") == string("pfb"));
    CHECK(find(text2, "ppp") == string("pfb"));
    CHECK(find(text2, "pfp") == string("pfb"));
    CHECK(find(text2, "pbp") == string("pfb"));
    CHECK(find(text2, "bfb") == string("pfb"));
}
TEST_CASE("Test replacement of w and v")
{
    string text1 = "xxx wowry yyy";
    CHECK(find(text1, "wowry") == string("wowry"));
    CHECK(find(text1, "vowry") == string("wowry"));
    CHECK(find(text1, "vovry") == string("wowry"));
    CHECK(find(text1, "wovry") == string("wowry"));
    string text2 = "wowry xxx yyy";
    CHECK(find(text2, "wowry") == string("wowry"));
    CHECK(find(text2, "vowry") == string("wowry"));
    CHECK(find(text2, "vovry") == string("wowry"));
    CHECK(find(text2, "wovry") == string("wowry"));
    string text3 = "xxx yyy wowry";
    CHECK(find(text3, "wowry") == string("wowry"));
    CHECK(find(text3, "vowry") == string("wowry"));
    CHECK(find(text3, "vovry") == string("wowry"));
    CHECK(find(text3, "wovry") == string("wowry"));
}
TEST_CASE("Test replacement of g and j")
{
    string text1 = "xxx dogjobAndjudge yyy";
    CHECK(find(text1, "dogjobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text1, "dogjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text1, "doggobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text1, "doggobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text1, "dojjobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text1, "dojjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text1, "dojjobAndgudje") == string("dogjobAndjudge"));
    string text2 = "dogjobAndjudge xxx yyy";
    CHECK(find(text2, "dogjobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text2, "dogjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text2, "doggobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text2, "doggobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text2, "dojjobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text2, "dojjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text2, "dojjobAndgudje") == string("dogjobAndjudge"));
    string text3 = "xxx yyy dogjobAndjudge";
    CHECK(find(text3, "dogjobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text3, "dogjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text3, "doggobAndjudge") == string("dogjobAndjudge"));
    CHECK(find(text3, "doggobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text3, "dojjobAndgudge") == string("dogjobAndjudge"));
    CHECK(find(text3, "dojjobAndjudje") == string("dogjobAndjudge"));
    CHECK(find(text3, "dojjobAndgudje") == string("dogjobAndjudge"));
}

TEST_CASE("Test replacement of c and k and q")
{
    string text1 = "xxx cocokukuququoqckkcq yyy";
    CHECK(find(text1, "cocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "kokokukuququoqkkkkq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "kocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "kokokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "kokokukuququoqkkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "qocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "qoqokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "qoqokukuququoqqkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "qoqokukuququoqqkkqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "qokocuqucukuoccqcqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text1, "koqocuqukucuocqcqkc") == string("cocokukuququoqckkcq"));

    string text2 = "cocokukuququoqckkcq xxx yyy";
    CHECK(find(text2, "cocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "kokokukuququoqkkkkq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "kocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "kokokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "kokokukuququoqkkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "qocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "qoqokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "qoqokukuququoqqkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "qoqokukuququoqqkkqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "qokocuqucukuoccqcqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text2, "koqocuqukucuocqcqkc") == string("cocokukuququoqckkcq"));

    string text3 = "xxx yyy cocokukuququoqckkcq";
    CHECK(find(text3, "cocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "kokokukuququoqkkkkq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "kocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "kokokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "kokokukuququoqkkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "qocokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "qoqokukuququoqckkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "qoqokukuququoqqkkcq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "qoqokukuququoqqkkqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "qokocuqucukuoccqcqq") == string("cocokukuququoqckkcq"));
    CHECK(find(text3, "koqocuqukucuocqcqkc") == string("cocokukuququoqckkcq"));
}
TEST_CASE("Test replacement of s and z")
{
    string text1 = "xxx abcdefghijklmnopqrstuvwxyz yyy";
    CHECK(find(text1, "abcdefghijklmnopqrstuvwxyz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text1, "abcdefghijklmnopqrztuvwxyz") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text1, "abcdefghijklmnopqrstuvwxys") == string("abcdefghijklmnopqrstuvwxyz"));
    CHECK(find(text1, "abcdefghijklmnopqrztuvwxys") == string("abcdefghijklmnopqrstuvwxyz"));
    string text2 = "xxx sqzsgwgazsfz yyy";
    CHECK(find(text2, "sqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "zqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "zqzzgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "zqzzgwgazzfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "sqssgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "sqssgwgassfz") == string("sqzsgwgazsfz"));
    CHECK(find(text2, "zqszgwgaszfs") == string("sqzsgwgazsfz"));

    string text3 = "sqzsgwgazsfz xxx yyy";
    CHECK(find(text3, "sqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "zqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "zqzzgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "zqzzgwgazzfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "sqssgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "sqssgwgassfz") == string("sqzsgwgazsfz"));
    CHECK(find(text3, "zqszgwgaszfs") == string("sqzsgwgazsfz"));

    string text4 = "xxx yyy sqzsgwgazsfz";
    CHECK(find(text4, "sqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "zqzsgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "zqzzgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "zqzzgwgazzfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "sqssgwgazsfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "sqssgwgassfz") == string("sqzsgwgazsfz"));
    CHECK(find(text4, "zqszgwgaszfs") == string("sqzsgwgazsfz"));
}

TEST_CASE("Test replacement of d and t")
{
    string text1 = "xxx dotnet.dotnet yyy";
    CHECK(find(text1, "dotnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "totnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "totnet.totnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "dodnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "dodned.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "dodned.dodnet") == string("dotnet.dotnet"));
    CHECK(find(text1, "dodned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text1, "dotned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text1, "todned.todned") == string("dotnet.dotnet"));
    string text2 = "dotnet.dotnet xxx yyy";
    CHECK(find(text2, "dotnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "totnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "totnet.totnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "dodnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "dodned.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "dodned.dodnet") == string("dotnet.dotnet"));
    CHECK(find(text2, "dodned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text2, "dotned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text2, "todned.todned") == string("dotnet.dotnet"));
    string text3 = "xxx yyy dotnet.dotnet";
    CHECK(find(text3, "dotnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "totnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "totnet.totnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "dodnet.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "dodned.dotnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "dodned.dodnet") == string("dotnet.dotnet"));
    CHECK(find(text3, "dodned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text3, "dotned.dodned") == string("dotnet.dotnet"));
    CHECK(find(text3, "todned.todned") == string("dotnet.dotnet"));
}
TEST_CASE("Test replacement of o and u")
{
    string text1 = "xxx ourorour yyy";
    CHECK(find(text1, "ourorour") == string("ourorour"));
    CHECK(find(text1, "oororour") == string("ourorour"));
    CHECK(find(text1, "uurorour") == string("ourorour"));
    CHECK(find(text1, "uororour") == string("ourorour"));
    CHECK(find(text1, "oororoor") == string("ourorour"));
    CHECK(find(text1, "uuroruur") == string("ourorour"));
    CHECK(find(text1, "uururuur") == string("ourorour"));
    CHECK(find(text1, "uoruruor") == string("ourorour"));
    string text2 = "ourorour xxx yyy";
    CHECK(find(text2, "ourorour") == string("ourorour"));
    CHECK(find(text2, "oororour") == string("ourorour"));
    CHECK(find(text2, "uurorour") == string("ourorour"));
    CHECK(find(text2, "uororour") == string("ourorour"));
    CHECK(find(text2, "oororoor") == string("ourorour"));
    CHECK(find(text2, "uuroruur") == string("ourorour"));
    CHECK(find(text2, "uururuur") == string("ourorour"));
    CHECK(find(text2, "uoruruor") == string("ourorour"));
    string text3 = "xxx yyy ourorour";
    CHECK(find(text3, "ourorour") == string("ourorour"));
    CHECK(find(text3, "oororour") == string("ourorour"));
    CHECK(find(text3, "uurorour") == string("ourorour"));
    CHECK(find(text3, "uororour") == string("ourorour"));
    CHECK(find(text3, "oororoor") == string("ourorour"));
    CHECK(find(text3, "uuroruur") == string("ourorour"));
    CHECK(find(text3, "uururuur") == string("ourorour"));
    CHECK(find(text3, "uoruruor") == string("ourorour"));
}

TEST_CASE("Test replacement of i and y")
{
    string text1 = "xxx yiyiheysayios yyy";
    CHECK(find(text1, "yiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "iiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "yiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "iiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "yyyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "yyyyheysayios") == string("yiyiheysayios"));
    CHECK(find(text1, "yiyiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text1, "iiiiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text1, "yyyyheysayyos") == string("yiyiheysayios"));
    CHECK(find(text1, "iyiyheisaiyos") == string("yiyiheysayios"));
    string text2 = "yiyiheysayios xxx yyy";
    CHECK(find(text2, "yiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "iiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "yiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "iiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "yyyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "yyyyheysayios") == string("yiyiheysayios"));
    CHECK(find(text2, "yiyiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text2, "iiiiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text2, "yyyyheysayyos") == string("yiyiheysayios"));
    CHECK(find(text2, "iyiyheisaiyos") == string("yiyiheysayios"));
    string text3 = "xxx yyy yiyiheysayios";
    CHECK(find(text3, "yiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "iiyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "yiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "iiiiheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "yyyiheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "yyyyheysayios") == string("yiyiheysayios"));
    CHECK(find(text3, "yiyiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text3, "iiiiheisaiios") == string("yiyiheysayios"));
    CHECK(find(text3, "yyyyheysayyos") == string("yiyiheysayios"));
    CHECK(find(text3, "iyiyheisaiyos") == string("yiyiheysayios"));
}


/* Add more test cases here */
