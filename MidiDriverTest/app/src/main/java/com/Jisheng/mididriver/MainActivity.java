package com.Jisheng.mididriver;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;

import android.util.Log;
//import android.view.View;
import android.widget.Button;
//import com.Jisheng.mididriver.*;
import com.jisheng.testlib.*;

public class MainActivity extends AppCompatActivity {
    private Button b1;

    public void TestFunc() {
        Log.v("GZJ","[GZJ] MidiDriverPlugin_APL::TestFunc");
        TestClass.TestFunc();
    }
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
//        b1 = (Button)findViewById(R.id.button2);
//        b1.setOnClickListener(new View.OnClickListener() {
//            @Override
//            public void onClick(View view) {
//                Log.v("GZJ","OnClick 1");
//            }
//
//        });
        TestFunc();
    }


}
