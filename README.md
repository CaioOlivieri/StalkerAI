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

### **Milestone 1: Core Systems & Player Foundation**

* **Objective:** To establish a stable project architecture and implement a fully controllable player character.
* **Tasks:**
    * [x] **Project Setup:** Establish a stable C++ project, a clean development environment, and a professional version control workflow with Git & Git LFS.
    * [x] **Arena Blockout:** Create a functional level blockout to serve as a testbed for all gameplay mechanics, with a focus on verticality and traversal opportunities.
    * [ ] **C++ Character Architecture:** Architect and create a shared C++ base class (`SltakerAICharacter`) for all characters and a dedicated child class for the player (`StalkerAIPlayerCharacter`).
    * [ ] **Player Controller Implementation:**
        * Implement camera controls (Spring Arm and Camera components) in the player's C++ class.
        * Configure basic locomotion (movement, running, jumping) via the **Enhanced Input System**.
    * [ ] **Animation Integration (Locomotion):** Create a foundational **Animation Blueprint** and **State Machine** to drive the basic locomotion animations (Idle, Walk, Run, Jump) based on data from the C++ character.
    * [ ] **Health & Damage System:** Develop a reusable C++ `HealthComponent` and attach it to the base character class.

### **Milestone 2: Combat Mechanics Prototype**

* **Objective:** To implement a functional combat loop, allowing for interaction between characters through damage.
* **Tasks:**
    * [ ] **Weapon System:** Implement a foundational C++ weapon system (hitscan or projectile based).
    * [ ] **Core Combat Loop:** Add logic for shooting, reloading, and ammo management.
    * [ ] **Animation Integration (Combat):** Expand the Animation Blueprint with an 'Upper Body Slot' to allow for aiming and shooting animations to play while moving.
    * [ ] **Target Dummy:** Create a simple AI target dummy that utilizes the `HealthComponent` to receive damage and be destroyed.

### **Milestone 3: Advanced Player Traversal (Parkour)**

* **Objective:** To give the player a rich, acrobatic moveset for navigating the environment.
* **Tasks:**
    * [ ] **Fall Roll System:** Implement a roll to negate or reduce fall damage based on landing velocity, driven by a `Root Motion` animation.
    * [ ] **Obstacle Vaulting System:** Develop a system using line/sphere traces to detect and vault over low obstacles.
    * [ ] **Ledge Climbing/Mantle System:** Implement logic for climbing up ledges.
    * [ ] **Animation Integration (Parkour):** Expand the Animation Blueprint with new states, logic, and `Anim Notifies` to handle all new traversal animations.

### **Milestone 4: AI Implementation (Enemies & Ally)**

* **Objective:** To bring the non-player characters to life with distinct, appropriate AI architectures that drive their tactical and support behaviors.
* **Tasks:**
    * [ ] **Common Enemy AI:**
        * Create a dedicated C++ child class inheriting from the `SltakerAICharacter` base.
        * Configure a new `AIController` and a **Behavior Tree** to manage the AI's logic flow.
        * Implement core behaviors using BT Tasks and Decorators: Patrolling predefined paths, detecting the player (sight and sound), and engaging in basic combat.
        * Implement tactical repositioning logic: creating custom BT nodes for seeking cover when reloading or under suppressive fire.
    * [ ] **Ally AI:**
        * Create a dedicated C++ child class for the ally character.
        * Implement foundational support behaviors (following the player, engaging shared targets) using a **Behavior Tree**.
        * Develop a data-driven **Utility System** as a custom BT Service/Task to allow the ally to make intelligent decisions about when to perform support actions (heal player, provide ammo, or provide covering fire).

### **Milestone 5: The "Acrobatic Stalker" (Boss AI)**

* **Objective:** To build the signature "Boss" enemy, leveraging a high-performance, animation-driven architecture for complex and relentless pursuit.
* **Tasks:**
    * [ ] **Advanced Traversal Implementation (Player):** First, implement advanced parkour mechanics like wall running and wall jumping for the Player, establishing a functional system for the AI to use.
    * [ ] **Boss AI Architecture:** Architect the Boss's core logic, states, and reactions using Unreal's modern **State Tree** system for maximum performance and fluid transitions between actions.
    * [ ] **AI Parkour Navigation:** Implement custom State Tree Tasks that interface with Unreal's `NavLinkProxy` system, teaching the Boss AI to use all available parkour mechanics (vaulting, climbing, wall running) for aggressive and unpredictable pursuit.

### **Milestone 6: Advanced Interaction & Game Loop**

* **Objective:** To implement the final core mechanics and a basic UI, creating a complete gameplay loop.
* **Tasks:**
    * [ ] **Player "Downed" State:** Develop the mechanic where the player enters a downed state at zero health.
    * [ ] **Ally Support Systems:** Implement the ally's ability to provide ammo, heal, and revive the player from the downed state, likely using a C++ `Interface`.
    * [ ] **UI/HUD:** Create a basic user interface with UMG to display essential information (player health, ammo, ally status).

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