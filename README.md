# StalkerAI: A C++ Prototyping Sandbox for Dynamic Combat AI

## About The Project

*A development sandbox built in Unreal Engine 5 to architect, implement, and test advanced AI behaviors and core gameplay systems with a C++ first approach.*
StalkerAI was born from a single objective: to build a robust, reusable, and high-performance foundation for prototyping advanced combat AI in Unreal Engine 5. This project prioritizes a clean C++ architecture for core systems, using Blueprints for high-level logic and data integration. It serves as both a personal learning journey and a technical showcase of core game development principles.

This repository documents the step-by-step process of implementing key features, including:
* A modular character controller using Unreal's Enhanced Input System.
* A reusable Health, Damage, and Combat system built in C++.
* A flexible blockout arena for rapid level design and gameplay testing.
* Foundational AI behaviors designed for dynamic interaction.

<br>

<a href="[LINK PARA SEU VIDEO NO YOUTUBE]" title="Clique para ver a demonstração em vídeo">
  <img src="https://img.youtube.com/vi/[ID_DO_SEU_VIDEO]/maxresdefault.jpg" alt="StalkerAI Video Demonstration">
</a>

<br>

## 🗺️ Full Project Roadmap
-------------------------------------------------------
## Technical Case Study: Forging a Stable Foundation

The initial development of this project provided one of the most valuable engineering challenges of my career, cementing the importance of a sound architectural foundation.

#### The Initial Challenge & Systemic Instability

The project began with an attempt to merge the Third-Person Template features into a Blank C++ project. This seemingly straightforward approach led to immediate and cascading build failures. After resolving an initial `AIModule` dependency error in the `.Build.cs` file, the project remained critically unstable. The core "phantom problem" was identified as intermittent compilation failures, often reporting false `out of memory` errors.

#### Deep-Dive Diagnosis & The Architectural Realization

A deep analysis of the full compiler logs revealed that the root cause was not in the project's code, but in a faulty **Incredibuild** integration that came bundled with the IDE. The unstable project state, caused by the improper template merge, was triggering bugs in this third-party tool, creating an unpredictable and unreliable development environment.

It became clear that continuing to apply point-fixes was inefficient. The foundation itself was compromised.

#### The Strategic Decision: A Full Reset for Long-Term Stability

Faced with this systemic failure, I made the strategic engineering decision to discard the patched-together project and restart with a clean Third-Person C++ template.

This decision was not a step back, but a crucial step *forward*. It was a deliberate choice to prioritize long-term project health over short-term progress, eliminating technical debt from day one. The goal was to build a foundation that was:

* **Solid:** Free from unpredictable "phantom" errors and providing a stable, reliable development experience.
* **Scalable:** Architected to easily accommodate new, complex systems (weapons, advanced AI, UI) without breaking the core.
* **Durable:** Aligned with Unreal Engine's best practices, ensuring easier maintenance and future engine version migrations.

-------------------------------------------------------

## Development Roadmap

- [ ] **Week 1: Core Foundation & Prototyping**
  - [x] Establish a stable C++ project and resolve development environment issues.
  - [x] Create a functional level blockout using Unreal's Modeling Mode to serve as a testbed.
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

## Current Features

* **Character Controller:** Fully functional third-person character movement based on Unreal's Enhanced Input System.
* **Stable Project Base:** A clean and robust C++ architecture ready for feature development.
* **Development Arena:** A simple blockout level for gameplay testing and iteration.

## Built With

* **Unreal Engine 5**
* **C++**
* **Blueprints**
* **Visual Studio 2022**
* **Git & Git LFS**