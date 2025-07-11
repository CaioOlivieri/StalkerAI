# StalkerAI - A UE5 Prototyping Sandbox

## About The Project

StalkerAI is a development sandbox built in Unreal Engine 5 to prototype and iterate on core gameplay mechanics for a third-person shooter. The primary focus of this project is to build robust, reusable systems from the ground up, emphasizing a clean and efficient C++ foundation.

This repository documents the step-by-step process of implementing key features, including:
* A modular character controller using Unreal's Enhanced Input System.
* A reusable Health, Damage, and Combat system built in C++.
* A flexible blockout arena for rapid level design and gameplay testing.
* Foundational AI behaviors designed for dynamic interaction.

## 🗺️ Full Project Roadmap

This project is structured into a multi-week plan, focusing on developing a complete vertical slice of a third-person shooter sandbox, with an emphasis on robust C++ systems.

---

- [ ] **Week 1: Core Foundation & Prototyping**
  - [x] Establish a stable C++ project and resolve development environment issues.
  - [ ] Create a functional level blockout using Unreal's Modeling Mode to serve as a testbed.
  - [ ] Implement a C++ player character with responsive controls via the Enhanced Input System.
  - [ ] Architect a reusable C++ Health Component on a basic AI target dummy.

- [ ] **Week 2: Weapon Systems & Combat Feedback**
  - [ ] Implement a foundational weapon system in C++ (e.g., hitscan or projectile based).
  - [ ] Add core mechanics: shooting logic, reloading, and ammo management.
  - [ ] Integrate visual and audio feedback for combat (VFX for muzzle flash/impacts, placeholder SFX).

- [ ] **Week 3: Dynamic AI Behavior**
  - [ ] Utilize the AIModule and StateTree to create more intelligent agents.
  * [ ] Implement foundational AI states: patrolling, player detection, and basic combat reactions (e.g., seeking cover, engaging).

- [ ] **Week 4: Game Loop & User Interface (UI)**
  - [ ] Develop a complete gameplay loop with clear objectives and win/loss conditions.
  - [ ] Create a basic user interface (HUD) with C++ and UMG to display player stats (health, ammo).
  - [ ] Implement essential systems like a main menu and pause functionality.
  - [ ] Polish and refine existing mechanics based on playtesting.

This project serves as both a personal learning journey and a technical showcase of core game development principles in a modern engine.

## Built With

* Unreal Engine 5
* C++
* Blueprints
* Visual Studio 2022