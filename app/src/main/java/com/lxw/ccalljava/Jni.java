package com.lxw.ccalljava;


import android.util.Log;



/**
 * <pre>
 *     author : lxw
 *     e-mail : lsw@tairunmh.com
 *     time   : 2017/05/12
 *     desc   :
 * </pre>
 */

public class Jni {
    static {
        System.loadLibrary("Test");
    }


    public  static final String TAG="Jni";



    public native void callbackAdd();

    public native void callbackHelloFromJava();

    public native  void callbackPrintString();

    public native void callbackSayHello();





    public int add(int x,int y){
        Log.d(TAG, "add() returned: x: " +x+" y:"+ y );
        return x+y;
    }

    public void helloFromJava(){
        Log.d(TAG, "helloFromJava()" );
    }

    public void printString(String s){
        Log.d(TAG, "printString() returned: C中输入的字符串" +s );
    }

    public static void sayHello(String s){
        Log.d(TAG, "sayHello() returned: 我是Java中的Jni,我被C调用了 " +s );
    }
}
