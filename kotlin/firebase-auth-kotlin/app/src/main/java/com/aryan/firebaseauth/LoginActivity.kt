package com.aryan.firebaseauth

import android.app.ProgressDialog
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.TextUtils
import android.widget.Toast
import com.google.firebase.auth.FirebaseAuth
import kotlinx.android.synthetic.main.activity_login.*

class LoginActivity : AppCompatActivity() {

    private lateinit var progressDialogue : ProgressDialog
    private lateinit var firebaseAuth  :FirebaseAuth



    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_login)

        progressDialogue = ProgressDialog(this)
        progressDialogue.setTitle("Please Wait")
        progressDialogue.setMessage("Logging In...")
        progressDialogue.setCanceledOnTouchOutside(true)

        firebaseAuth = FirebaseAuth.getInstance()
        checkUser()

        bt_navigate_reg.setOnClickListener {
            startActivity(Intent(this@LoginActivity,RegisterActivity::class.java))
        }

        bt_login.setOnClickListener {
            validateData()
        }


        // handle clicks

    }

    private fun validateData(){
        if(TextUtils.isEmpty(et_email.text.toString())){
            Toast.makeText(this,"Please Enter all the details ", Toast.LENGTH_LONG).show()
        }else if (TextUtils.isEmpty(et_password.text.toString())){
            Toast.makeText(this,"Please Enter all the details ", Toast.LENGTH_LONG).show()
        }else{
            firebaseLogin()
        }


    }
    private fun firebaseLogin(){
        progressDialogue.show()
         val email = et_email.text.toString()
        val password = et_password.text.toString()
        firebaseAuth.signInWithEmailAndPassword(email,password).
                addOnSuccessListener {
                    val currentUser = firebaseAuth.currentUser
                    val email = currentUser!!.email
                    progressDialogue.dismiss()
                    Toast.makeText(this,"Logged in Successfully as $email", Toast.LENGTH_LONG).show()
                    startActivity(Intent(this@LoginActivity,ProfileActivity::class.java))
                    finish()
                }.addOnFailureListener {
                    progressDialogue.dismiss()
                    Toast.makeText(this,"Failed to log in ", Toast.LENGTH_LONG).show()
        }

    }

    private fun checkUser(){
        val firebaseUser = firebaseAuth.currentUser
        if(firebaseUser!=null){
            // user is logged in already
            startActivity(Intent(this@LoginActivity,ProfileActivity::class.java))
            finish()
        }
    }
}