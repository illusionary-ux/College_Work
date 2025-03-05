package com.example.demo.entity;

import lombok.Data;

@Data
public class User {
    public enum Gender {
        MALE, FEMALE
    }
    private String uid;
    private String name;
    private int age;
    private Gender gender;
    private String photo;
    private String intro;
}
