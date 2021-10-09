package com.aryan.firebaseauth

import android.app.ProgressDialog
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.TextUtils
import android.widget.Toast
import com.google.firebase.auth.FirebaseAuth
import kotlinx.android.synthetic.main.activity_login.*
import kotlinx.android.synthetic.main.activity_register.*

class RegisterActivity : AppCompatActivity() {

    private lateinit var progressDialogue : ProgressDialog
    private lateinit var firebaseAuth  : FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_register)

        progressDialogue = ProgressDialog(this)
        progressDialogue.setTitle("Please Wait")
        progressDialogue.setMessage("Logging In...")
        progressDialogue.setCanceledOnTouchOutside(true)

        firebaseAuth = FirebaseAuth.getInstance()

        bt_register.setOnClickListener {
            if(TextUtils.isEmpty(et_firstname.text.toString())){
                Toast.makeText(this,"Please Enter all the details ",Toast.LENGTH_LONG).show()
                return@setOnClickListener
            }else if (TextUtils.isEmpty(et_lastname.text.toString())){
                Toast.makeText(this,"Please Enter all the details ",Toast.LENGTH_LONG).show()
                return@setOnClickListener
            }else if(TextUtils.isEmpty(et_email_reg.text.toString())){
                Toast.makeText(this,"Please Enter all the details ",Toast.LENGTH_LONG).show()
                return@setOnClickListener
            }else if (TextUtils.isEmpty(et_password_reg.text.toString())){
                Toast.makeText(this,"Please Enter all the details ",Toast.LENGTH_LONG).show()
                return@setOnClickListener
            }else{
                firebaseSign()
            }

        }

    }

    private fun firebaseSign() {
        progressDialogue.show()

        firebaseAuth.createUserWithEmailAndPassword(et_email_reg.text.toString(),et_password_reg.text.toString())
            .addOnSuccessListener {
                progressDialogue.dismiss()
                val firebaseUser = firebaseAuth.currentUser
                val email = firebaseUser!!.email
                Toast.makeText(this,"Account Created with Email : $email",Toast.LENGTH_LONG).show()
                startActivity(Intent(this@RegisterActivity,ProfileActivity::class.java))
                finish()
            }.addOnFailureListener {
                Toast.makeText(this,"Registration Failed",Toast.LENGTH_LONG).show()
            }

    }
}