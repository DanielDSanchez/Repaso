package com.prueba.demo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("api/prueba")
public class PruebaController {

    @GetMapping("/mensaje")
    public String mensaje() {
        return "Sapo perro";
    }
}
