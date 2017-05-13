package com.lxw.ccalljava;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

public class MainActivity extends AppCompatActivity {
    private  Jni jni;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        jni=new Jni();
    }

    public void onAdd(View view) {
        jni.callbackAdd();
    }

    public void onHelloFromJava(View view) {
        jni.callbackHelloFromJava();
    }

    public void onPrintString(View view) {
        jni.callbackPrintString();
    }

    public void onSayHello(View view) {
        jni.callbackSayHello();
    }
}
