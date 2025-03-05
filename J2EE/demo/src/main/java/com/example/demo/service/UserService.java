package com.example.demo.service;


import com.example.demo.entity.User;
import org.springframework.stereotype.Service;

import java.util.HashMap;
import java.util.Map;

@Service
public class UserService {

    Map<String, User> userPool; //使用一个map对象将用户数据存放在内存中

    int cnt = 0; //计数，统计已经加入了多少User对象


    public UserService() {  //初始化时，加入默认用户“空”

        userPool = new HashMap<>();


        String uid = "UID000";

        User user = new User();

        user.setUid(uid);

        user.setName("Aether");

        user.setAge(18);

        user.setGender(User.Gender.MALE);

        user.setIntro("Traveler on Teyvat.");

        userPool.put(uid, user);

    }
    public User getUser(String uid){  //定义根据id获取用户的方法

        return userPool.get(uid);

    }

}